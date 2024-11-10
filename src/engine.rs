use crate::{renderer::Renderer, input::Input, physics::PhysicsEngine, scene::Scene};
use winit::window::Window;

pub struct GameEngine {
    renderer: Renderer,
    input: Input,
    physics: PhysicsEngine,
    scene: Scene,
}

impl GameEngine {
    pub async fn new(window: &Window) -> Self {
        let renderer = Renderer::new(window).await;
        let input = Input::new();
        let physics = PhysicsEngine::new();
        let scene = Scene::new();

        Self { renderer, input, physics, scene }
    }

    pub fn update(&mut self) {
        self.input.clear();
        self.physics.update(1.0 / 60.0);
    }

    pub fn render(&self) {
        self.renderer.render();
    }
}
