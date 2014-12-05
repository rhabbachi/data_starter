; This make file helps package DKAN as well as desired modules, themes, and
; libraries. Use in conjunction with drush subtree or build-manager to track
; and contribute to upstream code.

includes[dkan] = projects/dkan/build-dkan.make
includes[data_story] = projects/data_story/data_story.make
includes[data_disqus] = projects/data_disqus/data_disqus.make
includes[data_workflow] = projects/data_workflow/data_workflow.make
includes[visualization_entity] = projects/visualization_entity/visualization_entity.make

projects[password_policy][version] = 1.9
projects[password_policy][subdir] = contrib

projects[autologout][version] = 4.3
projects[autologout][subdir] = contrib

projects[advagg][version] = 2.7
projects[advagg][subdir] = contrib

projects[cacheexclude][version] = 2.3
projects[cacheexclude][subdir] = contrib

projects[seckit][version] = 1.9
projects[seckit][subdir] = contrib

; Include desired modules, themes, or libraries here.
projects[devel][version] = 1.x
projects[devel][subdir] = contrib
