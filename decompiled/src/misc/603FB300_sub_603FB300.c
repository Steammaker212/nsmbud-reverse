/* sub_603FB300
 * address: 0x603FB300   size: 740   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FB300(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r1
  unsigned __int8 *v7; // r5
  int v8; // r5
  int v9; // r7
  int v10; // r6
  int v11; // r2
  int v12; // r0
  unsigned int v13; // r1
  int result; // r0
  int (**v15)(); // [sp+4h] [bp-34h] BYREF
  int *v16; // [sp+8h] [bp-30h]
  int v17; // [sp+Ch] [bp-2Ch]
  int v18; // [sp+10h] [bp-28h] BYREF

  nullsub_64();
  sub_6082B7E8(dword_60CC6E04, a1 + 272, FIELD_U8(dword_60C9CF0C, 1412));
  FIELD_U8(dword_60C8D9DC, 2313) = 0;
  v2 = FIELD_U32(a1, 196);
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  sub_608E1CE8(a1 + 1056);
  sub_60452D84(dword_60C9CF0C, &off_60C5CB30);
  **(_BYTE **)(dword_60CC6D78 + 140) = 0;
  v3 = dword_60CC6D78;
  v4 = FIELD_U32(dword_60CC6D78, 44);
  v5 = v4 & 0xFFFFFFFD;
  if ( (v4 & 1) != 0 )
    v5 = v4 | 2;
  v6 = v5 & 0xFFFFFFF7;
  if ( (v5 & 4) != 0 )
    v6 = v5 | 8;
  FIELD_U32(dword_60CC6D78, 44) = v6;
  if ( FIELD_U8(a1, 193) )
  {
    v7 = (unsigned __int8 *)LevelInfo_instance;
    sub_6040D3A4(LevelInfo_instance, FIELD_U8(LevelInfo_instance, 16));
    sub_6040D3B8(v7, v7[17]);
    sub_6040D3CC(v7, 0);
    sub_6040D3E0(v7, 255);
    sub_6040D3F4(v7, 1);
    v16 = &v18;
    v15 = &BufferedSafeStringBase_char_vtable_probably;
    v17 = 16;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v15);
    *(_BYTE *)v16 = 0;
    v15 = &off_60BD54D4;
    sub_6040D3FC(&v15, v7[28], v7[29]);
    v8 = v7[28];
    v9 = FIELD_U8(dword_60CC6D8C, 17);
    v10 = dword_60CC6D78;
    ((void (__fastcall *)(int (***)()))v15[3])(&v15);
    v11 = v8 + 1;
    v12 = v10 + 136;
    if ( v9 )
      sub_608FDDF4(v12, "rdash://Replay/otehon/%02u-%s.dat", v11, v16);
    else
      sub_608FDDF4(v12, "Replay/otehon/%02u-%s.dat", v11, v16);
    v3 = dword_60CC6D78;
    v13 = FIELD_U32(dword_60CC6D78, 44) | 1;
  }
  else
  {
    v13 = v6 & 0xFFFFFFFE;
  }
  FIELD_U32(v3, 44) = v13;
  Replay_title_title_03u_dat_ref(dword_60C9A230);
  FIELD_U32(dword_60CC6D78, 44) &= 0xFFFFFFEB;
  UnsetResourcesLoadedForAllProfiles(1);
  FIELD_U8(dword_60CC6D78, 509) = 1;
  sub_6002394C();
  if ( FIELD_U32(a1, 764) == 4
    && ((FIELD_U8(dword_60CC6D78, 44) & 0x10) != 0 || FIELD_U32(dword_60CC6D78, 32) == 1) )
  {
    sub_6040B33C(dword_60C9A1F0);
  }
  FIELD_U8(dword_60C9BB38, 628) = 0;
  sub_604574C8(dword_60C9CF18, 3, 0);
  if ( (unsigned int)(FIELD_U32(dword_60CC6C28, 16) - 1) <= 1 )
    sub_6081AEDC();
  result = dword_60C9C0FC;
  if ( dword_60C9C0FC )
    return sub_6042ADEC(dword_60C9C0FC, 2);
  return result;
}
