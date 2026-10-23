/* env_snow_ref
 * address: 0x606A37A8   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall env_snow_ref(int a1)
{
  nn__util__BinaryFileHeader *v2; // r0
  int v3; // r3
  int (**v5)(); // [sp+8h] [bp-30h] BYREF
  const char *v6; // [sp+Ch] [bp-2Ch]
  int (**v7)(); // [sp+10h] [bp-28h] BYREF
  const char *v8; // [sp+14h] [bp-24h]

  v7 = &sead__SafeStringBase__vtable;
  v5 = &sead__SafeStringBase__vtable;
  v8 = "env_snow";
  v6 = "output.bfres";
  v2 = (nn__util__BinaryFileHeader *)sub_608226EC(ArchiveManagerMaybe_instance, &v7, &v5, 0);
  FIELD_U32(a1, 6300) = sub_6086EDAC(v2);
  v3 = TileMgr_instance;
  if ( !FIELD_U8(TileMgr_instance, 40360) )
  {
    FIELD_U8(TileMgr_instance, 40360) = 1;
    v5 = &sead__SafeStringBase__vtable;
    v7 = &sead__SafeStringBase__vtable;
    v8 = "env_snow";
    v6 = "wmy_bgsnow.1";
    output_bfres_ref_448C14(&v7, &v5, v3 + 40368, (_DWORD *)(a1 + 6300), 0);
    v5 = &sead__SafeStringBase__vtable;
    v7 = &sead__SafeStringBase__vtable;
    v8 = "env_snow";
    v6 = "wmy_bgsnow.0";
    output_bfres_ref_448C14(&v7, &v5, TileMgr_instance + 40640, (_DWORD *)(a1 + 6300), 0);
    v5 = &sead__SafeStringBase__vtable;
    v7 = &sead__SafeStringBase__vtable;
    v8 = "env_snow";
    v6 = "wmy_bgsnow.2";
    output_bfres_ref_448C14(&v7, &v5, TileMgr_instance + 40912, (_DWORD *)(a1 + 6300), 0);
    v3 = TileMgr_instance;
  }
  sub_6044B798(a1 + 6304, v3 + 40368, v3 + 40640, v3 + 40912, -1, 22);
  FIELD_U8(a1, 6492) = 0;
  FIELD_U32(a1, 6504) = 0;
  FIELD_U32(a1, 6508) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
  return 1;
}
