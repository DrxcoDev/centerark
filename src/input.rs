use winit::event::{WindowEvent, KeyboardInput, VirtualKeyCode};

pub struct Input {
    pub keys_pressed: Vec<VirtualKeyCode>,
}

impl Input {
    pub fn new() -> Self {
        Self { keys_pressed: Vec::new() }
    }

    pub fn handle_event(&mut self, event: &WindowEvent) {
        if let WindowEvent::KeyboardInput { input, .. } = event {
            if let Some(keycode) = input.virtual_keycode {
                if input.state == winit::event::ElementState::Pressed {
                    self.keys_pressed.push(keycode);
                }
            }
        }
    }

    pub fn clear(&mut self) {
        self.keys_pressed.clear();
    }
}
