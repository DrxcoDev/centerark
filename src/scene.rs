use glam::{Vec3, Quat};

pub struct Object3D {
    pub position: Vec3,
    pub rotation: Quat,
    pub scale: Vec3,
}

impl Object3D {
    pub fn new(position: Vec3, rotation: Quat, scale: Vec3) -> Self {
        Self { position, rotation, scale }
    }
}

pub struct Scene {
    pub objects: Vec<Object3D>,
}

impl Scene {
    pub fn new() -> Self {
        Self { objects: Vec::new() }
    }

    pub fn add_object(&mut self, object: Object3D) {
        self.objects.push(object);
    }
}
