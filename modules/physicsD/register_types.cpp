#include "register_types.h"

#include "core/object/class_db.h"
#include "physicsD.h"

void initialize_physicsD_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}

	ClassDB::register_class<physicsD>();
}

void uninitialize_physicsD_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
	// Nothing to do here in this example.
}