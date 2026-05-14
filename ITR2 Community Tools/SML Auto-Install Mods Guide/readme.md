# Simple Mod Loader Auto-Install Mods Guide
By Donny00, with help from KZekai and TheHuman


## Contents:
1. [Notes](notes)
2. [Alpakit Packaging Plugin Setup](alpakit-packaging-plugin-setup)
3. [Unreal Engine Files Setup](unreal-engine-files-setup)
4. [Unreal Project Folder Setup](unreal-project-folder-setup)
5. [Unreal Engine Program Setup](unreal-engine-program-setup)
6. [Creating Your Own Mod](creating-your-own-mod)
7. [Installing SML Auto-Load Mods](installing-sml-auto-load-mods)
    
## Notes
 -   This guide is built for modding Into The Radius 2, but may be applicable to other titles built on the Unreal Engine.
    
 -   To avoid possibly losing any existing files you may have, and to prevent issues with other mod types in your project (e.g. patchers/ replacers), it is advisable to create a new blank Unreal project to use for this setup. Once successful, you can easily migrate your file between projects using Unreal Engine if needed.
    
 -   Ensure you make backups of any files that may be overwritten in this process. The easiest method is to add “.Backup” to the file extension - if you ever need to restore this version, simply delete the extra part of the file extension.
    
 -   When filepaths are mentioned, if they start with ( …\ ) this indicates that you need to include your personal path to the files to the right of those symbols - this is because each person may have files installed in different locations

		For instance: `…\Engine\Binaries\DotNET\AutomationTool\AutomationScripts\Scripts\`

		May be: `C:\Program Files (x86)\Unreal\UE_5.5\Engine\Binaries\DotNET \AutomationTool\AutomationScripts\Scripts`

 -   If you are entering a file path into a command terminal, ensure that it is within full quotation marks (“ “) - this prevents any errors resulting from spaces in the file path.  

 -   Files originally sourced from [github.com/Kein/AlpakitSO](https://github.com/Kein/AlpakitSO)
    
## Alpakit Packaging Plugin Setup:

### Unreal ENGINE Files Setup

1. Copy the “Engine” folder from the Alpakit files into your Unreal ENGINE directory.
  
2. Open a command terminal (not PowerShell) in the following Unreal ENGINE Directory:

	`…\Engine\Source\Programs\AutomationTool`
	
	(To easily open a terminal, click into the folder address bar once you are in the above folder, and replace the address with “cmd” then press the enter key.)  

	Your terminal window should look similar to this:
	![enter image description here](https://i.ibb.co/GQQRksCY/unnamed.png)

3. Run the following command by typing the file name into the console and pressing enter:  

	`dotnet build AutomationTool.csproj`

	![enter image description here](https://i.ibb.co/jZ1rpYGZ/unnamed.png)

4. Once completed, your terminal should look similar to this and can be closed:
	![enter image description here](https://i.ibb.co/7tzLdK1M/unnamed.png)

### Unreal PROJECT Folder Setup

5. Copy the contents of the ‘Setup Files’ folder into the root of your Unreal PROJECT folder. 

6. Right-click on “pack_mod.bat” and choose the “Edit in Notepad” option.  

7. Identify the line near the top that starts “set UATPath=”.
    
8. Replace everything to the right of the ‘=’ symbol with the path below (ensuring to complete the path before ‘...\’, and wrap the path in full quotation marks).
  
	`…\Engine\Binaries\DotNET\AutomationTool\AutomationTool.exe`

	![enter image description here](https://i.ibb.co/spHfjB79/unnamed.png)

9. Copy the “Mods” folder (Alpakit Files) into the root of your Unreal PROJECT folder. This folder contains a test mod to confirm everything works:

	![enter image description here](https://i.ibb.co/v42fmwqL/unnamed.png)
	
10. To confirm that everything has been setup correctly we will run a test pack; open a terminal window in your root Unreal PROJECT folder:

	![enter image description here](https://i.ibb.co/F4trm3XC/unnamed.png)

11. To package the test mod we will need to run the “pack_mod.bat” followed by the name of a mod’s folder within the main project’s \Mod folder. In this case, the mod is in a folder called “ExampleMod”, so the command needed will be:  
  
	`pack_mod.bat ExampleMod`

	![enter image description here](https://i.ibb.co/jvyTGZ7h/unnamed.png)

12. The terminal should run for a short time and finally output this:

	![enter image description here](https://i.ibb.co/rG49pNBH/unnamed.png)

13. The packaged files will be output to this folder in your Unreal PROJECT folder as a .zip:
    
	`…\Saved\ArchivedPlugins\Windows`

	![enter image description here](https://i.ibb.co/ZRK86dNz/unnamed.png)

### Unreal Engine Program Setup

14. Open your Unreal project with the Unreal Engine.

15. Open your content browser (CTRL + Space). In the top right of the content browser, click on ‘Settings’ and ensure that ‘Show Plugin Content’ is checked.

	![enter image description here](https://i.ibb.co/4RwWHX06/unnamed.png)

16. On the left side of the content browser, you should now see the ‘Plugins’ section in your project hierarchy:

	![enter image description here](https://i.ibb.co/xSSM1yzg/unnamed.png)

17. Within the ‘Plugins’ section, you should see the ‘TestMod’ content folder:
	
	![enter image description here](https://i.ibb.co/s9xNtdxr/unnamed.png)


## Creating Your Own Mod:
1. In file explorer, make a copy of the ‘TestMod’ folder inside …\Mods.
    
2. Rename the folder to the title of your mod.
    
3. Open your new mod folder and rename the .uplugin file to the title of your mod. Your folder should only contain the .uplugin file, and an empty folder named ‘Content’.

4. Open the .uplugin file with a text editor (like Notepad), and change the highlighted details for your mod:
 
	 ![enter image description here](https://i.ibb.co/WWcRdtkC/unnamed.png)

5. Save and close the .uplugin file.  

6. Load your Unreal project in Unreal Engine.
    
7. In the ‘Plugins’ section of your content browser, you should now see a content folder for your new mod:

	![enter image description here](https://i.ibb.co/1GjqZWf7/unnamed.png)

	*(If you do not see the folder, it is likely because Unreal Engine was open when you created the new folder. Restart your Engine and the folder should appear.)*

9. This plugin folder is where you will place all of your mod files (excluding dummied files from the vanilla game):
    
	- Your mod content folder should include a Blueprint Actor named ‘MOD_’ followed by the name of your mod. This actor replaces the traditional ‘ModActor’  Blueprint from previous methods as your primary logic control, and makes keeping track of mods easier in-engine.
    
		`e.g.  MOD_NewMod`

	- There is no requirement for labels for this packaging method.

10. When you are ready to package your mod, run the ‘pack_mod.bat’ as in step 15 of the initial setup, where the mod name is the mod you want to package:
	
	![enter image description here](https://i.ibb.co/v4L7qPTX/unnamed.png)

11. Your packed mod files will be output to a .zip in this folder of your Unreal project:  
          `…\Saved\ArchivedPlugins\Windows`

12. ***(Optional)*** Once packaged, you can rename the .pak, .ucas, & .utoc mod files for clarity, but they cannot be moved from their folder.
    
	This is most easily done using the program WinRAR, otherwise you will need to extract the files and then re-zip them.

## Install SML Auto-Load Mods
1. Ensure that Simple Mod Loader is installed into your IntoTheRadius2 GAME directory correctly:
	
	`…\steamapps\common\IntoTheRadius2\IntoTheRadius2\Content\Paks`

2. Navigate to this path in your GAME directory:
    
	`…\steamapps\common\IntoTheRadius2\IntoTheRadius2`

3. Create a new folder named ‘Mods’ here, this is where all future SML auto-loaded mods are to be placed:

	![enter image description here](https://i.ibb.co/4nMtgrg8/unnamed.png)

4. Extract your packaged mod into your GAME directory’s ‘Mods’ folder:

	![enter image description here](https://i.ibb.co/FLhMdctg/unnamed.png)

5. Your mod should now be successfully installed.
  
6. Start Into The Radius 2, and when at a suitable game level, press the tilde (~) key twice to open the larger SML console window.
  
7. If everything has worked correctly, your mod should be loaded and you should see an output similar to this in the console:
  
	`[SML] Attempting to respawn autodiscovered mods…`

	`[SML] Spawned NewMod as xxxxxxxxxxxxx`

	`[SML] Total autodiscovered mods spawned: 1`

	`[SML] Done`
