/* sub_606A4578
 * address: 0x606A4578   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A4578(int a1)
{
  int v2; // r5
  nn__util__BinaryFileHeader *v3; // r0
  int v4; // r1
  unsigned int v5; // r0
  int v6; // s0
  int (**v8)(); // [sp+8h] [bp-28h] BYREF
  const char *v9; // [sp+Ch] [bp-24h]
  int (**v10)(); // [sp+10h] [bp-20h] BYREF
  const char *v11; // [sp+14h] [bp-1Ch]

  v2 = dword_60CC6484;
  FIELD_U32(a1, 6492) = FIELD_U32(a1, 20) & 0xF;
  v10 = &sead__SafeStringBase__vtable;
  v8 = &sead__SafeStringBase__vtable;
  v11 = "obj_magmadeco";
  v9 = "output.bfres";
  v3 = (nn__util__BinaryFileHeader *)sub_608226EC(ArchiveManagerMaybe_instance, &v10, &v8, 0);
  FIELD_U32(a1, 6300) = sub_6086EDAC(v3);
  v4 = TileMgr_instance;
  if ( !FIELD_U8(TileMgr_instance, 41184) )
  {
    FIELD_U8(TileMgr_instance, 41184) = 1;
    v10 = &sead__SafeStringBase__vtable;
    v8 = &sead__SafeStringBase__vtable;
    v11 = "obj_magmadeco";
    v9 = "wmy_sparkfire";
    output_bfres_ref_448C14(&v10, &v8, v4 + 41192, (_DWORD *)(a1 + 6300), 0);
    v4 = TileMgr_instance;
  }
  sub_6044BD6C(a1 + 6304, v4 + 41192, -1, 22);
  v5 = FIELD_U32(a1, 6492) - 1;
  if ( v5 > 2 )
    v6 = 1061997773;
  else
    v6 = dword_60B0845C[v5];
  FIELD_U16(a1, 6496) = 150;
  FIELD_U32(a1, 6500) = v6;
  FIELD_U32(a1, 6504) = 1065353216;
  FIELD_F32(a1, 7708) = FIELD_F32(v2, 112) + (float)(FIELD_F32(v2, 104) * 0.5);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
  return 1;
}
