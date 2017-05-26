//
// Created by Mike Smith on 2017/5/8.
//

#ifndef WATERY_WORLD_H
#define WATERY_WORLD_H

#include <map>
#include <string>
#include <gl/glew.h>
#include "object.h"
#include "camera.h"

namespace watery
{
	// Objects are created and managed by Scene.
	class World
	{
	private:
		Camera _camera;
		std::map<std::string, Object *> _objects;
		
		World(void) {}
		World(const World &) = delete;
		World(World &&) = delete;
		World &operator=(const World &) = delete;
		~World(void);
	
	public:
		static World &instance(void);
		Object *create_object(const std::string &name);
		Object *object(const std::string &name) { return (_objects.count(name) ? _objects.at(name) : nullptr); }
		const Object *object(const std::string &name) const { return (_objects.count(name) ? _objects.at(name) : nullptr); }
		std::map<std::string, Object *> &objects(void) { return _objects; };
		const std::map<std::string, Object *> &objects(void) const { return _objects; };
		Camera &camera(void) { return _camera; }
		const Camera &camera(void) const { return _camera; }
		void destroy_object(const std::string &name) { _objects.erase(name); }
		void destroy_all(void);
	};
}

#endif  // WATERY_WORLD_H
