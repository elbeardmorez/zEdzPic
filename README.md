
## zEdzPic (the editor's pic)

a simple text editor with a picture toggle for instant (re-)inspiration

the editor is created with following goals in mind:
- a large single buffer as focus for editing, but backed by..
- multiple tabbed open documents, viewable, editable
- single line control buffer for action commands
- easy key navigation, with no mouse interaction necessary
- a toggled distraction

written in c/gtk+, aided by glade for the ui/widget layout

### requirements
- gtk+-3.0+
- GNU Make
- pkg-config

### features
- none

### status (pre-alpha)
- ui renders, but basic functionality / workflow of an editor as yet unimplemented so it is totally useless

## <p></p>

### development
#### done
- ui/layout

#### todo
- autotools
- load/edit/save/close
- custom browse dialog
- search and replace, regexp only
- picture toggle
- picture resizing/zoom
- configuration and persistance
- autosave by time
- autosave by content change
- picture slideshow
- incremental search as you type
- code highlighting

## <p></p>

### inspiration
another editor? yes, afraid so. the primary motivation for this project was to build something from scratch using gtk widgets. please bare this in mind when considering the points below

i use emacs, vim and gedit. this application is targeted as a drop in replacement for my light-weight sessions, which gedit/kwrite (which i used pre-gedit) usually cater for. the choices i've made for this application are purely a consequence of my use mixed use of these 3 excellent applications, of their pros and their cons (for me!) ..noted most of which could be worked around in some way or another

#### emacs
emacs is the heavy weight i use for projects i will be working on for long periods of time. such projects require a fair amount of setup, e.g. i have an emacs session file for this application which builds an environment of 30+ autotools, c, glade, shell, and gdb windows loading dozens of modes

<dl><dd>
<b>+</b> unparalleled customiseability and extensibilty<br>
<b>+</b> minibar [zEdzPic &lt;- control bar]<br>
<b>&ndash;</b> difficult to master<br>
<b>&ndash;</b> prone to bugs due to the mass of features installed / created over the vanilla<br>
<b>&ndash;</b> slow rendering, resizing windows, perhaps understably with my usage<br>
</dd></dl>

#### vim
my terminal only solution. i learnt to use it primarily to edit files remotely, administration tasks initially, but now alongside gdb. i love having a dozen or so panes open at the same time, all but one minimised (e.g. 2 lines), with the final pane, the focus, taking the remaining space

<dl><dd>
<b>+</b> responsive window resizing, and layout [zEdzPic &lt;- document layout]<br>
<b>+</b> no mouse oriented<br>
<b>+</b> built in word completion<br>
<b>&ndash;</b> multiple document open/resizing issue<br>
</dd></dl>

#### gedit
my 'throw-away/light-weight/multi-task' session editor

<dl><dd>
<b>+</b> light-weight<br>
<b>+</b> simple search/replace [zEdzPic]<br>
<b>+</b> simple spell check [zEdzPic]<br>
<b>+</b> simple default bindings [zEdzPic]<br>
<b>&ndash;</b> single pane focus<br>
</dd></dl>

