# ESP32 Sonic Core - UI & Asset Pack

Graphic assets pack for the audio project's user interface. The package is organized by thematic folders and includes all animations broken down into frames, control buttons in various states, and sprite sheets for use in SquareLine Studio.

## Package Directory Structure
```
assets/
- beaver/
|   - beaver_idle/
|   - beaver_next/
|   - beaver_playing/
|   - beaver_previous/
- buttons/
|   | back0.png / back1.png
|   | next0.png / next1.png
|   | play0.png / play1.png
|   | stop0.png / stop1.png
|   | SpriteShhetButtons.png
- cubes/
|   | cube0.png - cube7.png
|   | SpriteSheetCube.png
| SpriteSheetFull.png
| screenshoot_sqarelines.png
```
## Usage & Implementation Instructions
* **Beaver Animations (`beaver/`):** Each animation state is divided into its own folder with individual frames. It is recommended to merge the frames from each folder into a separate horizontal Sprite Sheet to easily use the `Animation Image` widget in SquareLine.
* **UI Buttons (`buttons/`):** Control buttons come in two states. Files ending in `0` are for the `Released` state, and files ending in `1` are for the `Pressed` state.
* **Existing Sheets:** The package includes ready-made sheets for the buttons, cubes, and a combined sheet (`SpriteSheetFull.png`). Note that some original filenames contain typos (e.g., `SpriteShhetButtons` and `screenshoot_sqarelines`) and must be referenced exactly as named in your code.

## Credits
Developed and designed by Stav. 