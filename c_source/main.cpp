#define IMPLEMENT_API
#include <hx/CFFI.h>

#include <windows.h>

static value set_state(value flag)
{
    val_check(flag, int);

    int res;
    int flag_int = val_int(flag);

    res = SetThreadExecutionState(flag_int);

    if (res == NULL)
    {
        return val_false;
    }

    return val_true;
}

static value set_priority(value flag)
{
    val_check(flag, int);

    int res;
    int flag_int = val_int(flag);

    res = SetPriorityClass(GetCurrentProcess(), flag_int);

    if (res == 0)
    {
        return val_false;
    }

    return val_true;
}

DEFINE_PRIM(set_state, 1);
DEFINE_PRIM(set_priority, 1);
