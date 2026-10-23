/* env_mist_ref_2
 * address: 0x602839E0   size: 776   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall env_mist_ref_2(int a1)
{
  _BYTE *v2; // r5
  nn__util__BinaryFileHeader *v3; // r0
  int v4; // r3
  int Area; // r0
  int (**v7)(); // [sp+Ch] [bp-34h] BYREF
  const char *v8; // [sp+10h] [bp-30h]
  int (**v9)(); // [sp+14h] [bp-2Ch] BYREF
  const char *v10; // [sp+18h] [bp-28h]

  FIELD_U32(a1, 76) |= 6u;
  FIELD_U32(a1, 8924) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 8928) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 8932) = FIELD_U32(a1, 116);
  FIELD_U8(a1, 8940) = 0;
  v2 = (_BYTE *)(a1 + 8940);
  if ( (FIELD_U8(a1, 21) & 0xF0) != 0 && sub_603FD6E0(dword_60C99DF4, FIELD_U8(LevelInfo_instance, 18)) )
    *v2 = 1;
  v9 = &sead__SafeStringBase__vtable;
  v7 = &sead__SafeStringBase__vtable;
  v10 = "env_mist";
  v8 = "output.bfres";
  v3 = (nn__util__BinaryFileHeader *)sub_608226EC(ArchiveManagerMaybe_instance, &v9, &v7, 0);
  FIELD_U32(a1, 6300) = sub_6086EDAC(v3);
  FIELD_U8(a1, 6508) = FIELD_U32(a1, 20);
  FIELD_U32(a1, 8916) = 0;
  FIELD_U32(a1, 6504) = 0;
  v4 = TileMgr_instance;
  if ( !FIELD_U8(TileMgr_instance, 34624) )
  {
    v7 = &sead__SafeStringBase__vtable;
    v9 = &sead__SafeStringBase__vtable;
    v10 = "env_mist";
    v8 = "wny_mist.0";
    output_bfres_ref_448C14(&v9, &v7, TileMgr_instance + 34632, (_DWORD *)(a1 + 6300), 0);
    v7 = &sead__SafeStringBase__vtable;
    v9 = &sead__SafeStringBase__vtable;
    v10 = "env_mist";
    v8 = "wny_mist.1";
    output_bfres_ref_448C14(&v9, &v7, TileMgr_instance + 34904, (_DWORD *)(a1 + 6300), 0);
    v7 = &sead__SafeStringBase__vtable;
    v9 = &sead__SafeStringBase__vtable;
    v10 = "env_mist";
    v8 = "wny_mist.2";
    output_bfres_ref_448C14(&v9, &v7, TileMgr_instance + 35176, (_DWORD *)(a1 + 6300), 0);
    v4 = TileMgr_instance;
    FIELD_U8(TileMgr_instance, 34624) = 1;
  }
  env_mist_ref_2_helper(a1 + 6304, v4 + 34632, v4 + 34904, v4 + 35176, -1, 22);
  Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
  LevelArea_getLocation(Area, (float *)(a1 + 6468), FIELD_U8(a1, 6508));
  FIELD_F32(a1, 108) = FIELD_F32(a1, 6468) + (float)(FIELD_F32(a1, 6476) - FIELD_F32(a1, 6468));
  FIELD_F32(a1, 112) = FIELD_F32(a1, 6472) - (float)(FIELD_F32(a1, 6480) - FIELD_F32(a1, 6472));
  FIELD_U32(a1, 6496) = 0;
  FIELD_U32(a1, 6492) = 0;
  FIELD_U32(a1, 6488) = 0;
  FIELD_U32(a1, 6484) = 0;
  FIELD_F32(a1, 8920) = sub_6000A42C(EnemyCounterMaybe_instance) + 6500.0;
  FIELD_U8(a1, 8941) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
  return 1;
}
