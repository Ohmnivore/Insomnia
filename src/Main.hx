package ;

import cpp.Lib;
import insomnia.Insomnia;

/**
 * ...
 * @author Ohmnivore
 */

class Main 
{
	static private inline var KEY_CODE_Q:Int = 113;
	
	static function main() 
	{
		Insomnia.preventSleep();
		Insomnia.setProcessPriority(Insomnia.P_REALTIME_PRIORITY_CLASS);
		
		Sys.println("Your computer shall not sleep while this process runs.");
		Sys.println("And this process shall have high priority.");
		Sys.println("Press 'q' to stop this evil process before your computer needs therapy.");
		
		var run:Bool = true;
		
		while (run)
		{
			Sys.sleep(0.01);
			
			if (Sys.getChar(false) == KEY_CODE_Q)
			{
				run = false;
				Sys.println("Nice dreams!");
				Sys.sleep(1);
			}
		}
	}
	
}