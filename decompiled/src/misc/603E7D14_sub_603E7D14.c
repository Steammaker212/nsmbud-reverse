/* sub_603E7D14
 * address: 0x603E7D14   size: 740   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E7D14(int a1, int a2)
{
  float v2; // r2
  float v3; // r1
  unsigned int v4; // r0
  _DWORD *v5; // r4
  _DWORD *v6; // r0
  _BYTE *v7; // r5
  bool v8; // zf
  int v9; // r0
  _BYTE *v10; // r5
  bool v11; // zf
  _BYTE *v12; // r5
  bool v13; // zf
  _BYTE *v14; // r5
  bool v15; // zf
  float v17[7]; // [sp+4h] [bp-1Ch] BYREF

  v2 = FIELD_F32(a2, 108);
  v3 = FIELD_F32(a2, 112);
  v17[0] = v2;
  v17[1] = v3;
  v17[2] = 3000.0;
  v4 = FIELD_U32(a1, 32);
  if ( v4 >= 4 )
    v4 = 0;
  v5 = *(_DWORD **)(PlayerMgr_instance + 4 * v4 + 32);
  sub_60768C20(v5, v17);
  if ( (*(int (__fastcall **)(_DWORD *))(*v5 + 1204))(v5) == 1 )
    (*(void (__fastcall **)(_DWORD *))(*v5 + 1208))(v5);
  sub_60768D14(v5, 0);
  sub_60768DA4(v5);
  Player_ReleaseCarryableEnemy(v5, FIELD_U32(dword_60C96478, 104));
  v6 = (_DWORD *)PlayerMgr_instance;
  v7 = *(_BYTE **)(PlayerMgr_instance + 32);
  v8 = v7 == 0;
  if ( v7 )
    v8 = v7 == (_BYTE *)v5;
  if ( !v8 )
  {
    if ( (v7[1219] & 8) == 0 )
    {
      v9 = FIELD_U32(PlayerMgr_instance, 32);
      v17[0] = v17[0] + -24.0;
      sub_60768C20(v9, v17);
    }
    if ( (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v7 + 1204))(v7) == 1 )
      (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)v7 + 1208))(v7);
    sub_60768D14(v7, 0);
    sub_60768DA4(v7);
    v6 = (_DWORD *)PlayerMgr_instance;
  }
  v10 = (_BYTE *)v6[9];
  v11 = v10 == 0;
  if ( v10 )
    v11 = v10 == (_BYTE *)v5;
  if ( !v11 )
  {
    if ( (v10[1219] & 8) == 0 )
    {
      v17[0] = v17[0] + -24.0;
      sub_60768C20(v10, v17);
    }
    if ( (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v10 + 1204))(v10) == 1 )
      (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)v10 + 1208))(v10);
    sub_60768D14(v10, 0);
    sub_60768DA4(v10);
    v6 = (_DWORD *)PlayerMgr_instance;
  }
  v12 = (_BYTE *)v6[10];
  v13 = v12 == 0;
  if ( v12 )
    v13 = v12 == (_BYTE *)v5;
  if ( !v13 )
  {
    if ( (v12[1219] & 8) == 0 )
    {
      v17[0] = v17[0] + -24.0;
      sub_60768C20(v12, v17);
    }
    if ( (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v12 + 1204))(v12) == 1 )
      (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)v12 + 1208))(v12);
    sub_60768D14(v12, 0);
    sub_60768DA4(v12);
    v6 = (_DWORD *)PlayerMgr_instance;
  }
  v14 = (_BYTE *)v6[11];
  v15 = v14 == 0;
  if ( v14 )
    v15 = v14 == (_BYTE *)v5;
  if ( !v15 )
  {
    if ( (v14[1219] & 8) == 0 )
    {
      v17[0] = v17[0] + -24.0;
      sub_60768C20(v14, v17);
    }
    if ( (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v14 + 1204))(v14) == 1 )
      (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)v14 + 1208))(v14);
    sub_60768D14(v14, 0);
    sub_60768DA4(v14);
  }
  sub_602380BC((_DWORD *)dword_60C8D9DC);
  FIELD_U32(PlayerMgr_instance, 140) = -1;
  return sub_6080A1A0(SoundSystem_instance, 0);
}
