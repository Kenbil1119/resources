# TMUX SHELL COMMANDS

Certainly! Here are some more tmux commands to help you navigate and manage your tmux sessions:

### Starting tmux

- **Openning tmux:**
  ```bash
  tmux
  ```
### Managing Panes:

- **Split screen into two vertically:**
  ```bash
  Ctrl-b %
  ```

- **Split sreen into two; horizontally:**
  ```bash
  Ctrl-b "
  ```

- **Navigate between panes:**
  ```bash
  Ctrl-b (arrow key)
  ```

- **Toggle between layouts:**
  ```bash
  Ctrl-b Space
  ```

- **Zoom into a pane:**
  ```bash
  Ctrl-b z
  ```
  Press again to zoom out.

- **Close the current pane:**
  ```bash
  Ctrl-b x
  ```

### Managing Windows:

- **Create a new window:**
  ```bash
  Ctrl-b c
  ```

- **Switch to the next window:**
  ```bash
  Ctrl-b n
  ```

- **Switch to the previous window:**
  ```bash
  Ctrl-b p
  ```

- **List all windows and select one interactively:**
  ```bash
  Ctrl-b w
  ```

- **Rename the current window:**
  ```bash
  Ctrl-b ,
  ```

### Managing Sessions:

- **Detach from the current session:**
  ```bash
  Ctrl-b d
  ```

- **List all sessions:**
  ```bash
  tmux list-sessions
  ```

- **Attach to a specific session:**
  ```bash
  tmux attach-session -t session_name
  ```

- **Create a new named session:**
  ```bash
  tmux new-session -s session_name
  ```

- **Switch between sessions:**
  ```bash
  Ctrl-b (
  ```
  and
  ```bash
  Ctrl-b )
  ```

### General Commands:

- **Show tmux command prompt:**
  ```bash
  Ctrl-b :
  ```
  You can then type various tmux commands.

- **Reload tmux configuration:**
  ```bash
  Ctrl-b :
  source-file ~/.tmux.conf
  ```

These commands provide a range of functionalities for managing panes, windows, and sessions in tmux. Feel free to explore more options and customize tmux according to your workflow. Additionally, you can refer to the tmux man page (`man tmux`) for comprehensive documentation.

- Refference from CHAT-GPT3.
