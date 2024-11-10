mod renderer;
mod input;
mod physics;
mod scene;
mod engine;

use engine::GameEngine;
use winit::{event::Event, event_loop::ControlFlow, event_loop::EventLoop, window::WindowBuilder};

#[tokio::main]
async fn main() {
    let event_loop = EventLoop::new();
    let window = WindowBuilder::new().build(&event_loop).unwrap();
    let mut game_engine = GameEngine::new(&window).await;

    event_loop.run(move |event, _, control_flow| {
        *control_flow = ControlFlow::Poll;

        match event {
            Event::WindowEvent { ref event, .. } if event == &winit::event::WindowEvent::CloseRequested => {
                *control_flow = ControlFlow::Exit;
            },
            Event::RedrawRequested(_) => {
                game_engine.update();
                game_engine.render();
            },
            Event::MainEventsCleared => {
                window.request_redraw();
            },
            _ => {}
        }
    });
}
