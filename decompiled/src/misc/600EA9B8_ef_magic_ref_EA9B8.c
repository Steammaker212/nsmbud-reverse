/* ef_magic_ref_EA9B8
 * address: 0x600EA9B8   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall ef_magic_ref_EA9B8(int a1)
{
  int v2; // r6
  int *v3; // r5
  int **v4; // r7
  int v5; // r0
  _DWORD **v6; // r0
  _DWORD *v7; // r5
  int ResArchiveById; // r0
  int v9; // r0
  int *v10; // r0
  int v11; // r0
  ActiveColliderMgr *v12; // r6
  int v13; // r0
  int (__fastcall *v14)(int, _DWORD *); // r2
  int v15; // r0
  _DWORD v17[2]; // [sp+14h] [bp-64h] BYREF
  Vec3 a3; // [sp+1Ch] [bp-5Ch] BYREF
  _DWORD v19[20]; // [sp+28h] [bp-50h] BYREF

  v2 = a1;
  v3 = (int *)(a1 + 7112);
  if ( FIELD_U8(a1, 8132) )
    v2 = FIELD_U32(a1, 56);
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v2 + 716))(v2) )
    (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 720))(v2);
  v4 = (int **)(a1 + 7096);
  sub_60421AD4(FIELD_U32(a1, 7096));
  v5 = *v3;
  v17[0] = &sead__SafeStringBase__vtable;
  v17[1] = FIELD_U32(v5, 36);
  v6 = *(_DWORD ***)(FIELD_U32(a1, 7096) + 28);
  if ( *(_DWORD *)(FIELD_U32(a1, 7096) + 24) > 1u )
    ++v6;
  v7 = *v6;
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  ShuAnim_play(v7, ResArchiveById, (int)v17);
  v9 = (*v4)[7];
  if ( (unsigned int)(*v4)[6] > 1 )
    v9 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v9 + 4), 0);
  v10 = (int *)(*v4)[7];
  if ( (unsigned int)(*v4)[6] > 1 )
    ++v10;
  v11 = *v10;
  FIELD_U32(v11, 20) = 0;
  FIELD_U32(v11, 28) |= 2u;
  v12 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7184));
  ActiveColldierMgr_removeFromCreateList(v12, (ActiveCollider *)(a1 + 7184));
  ActiveColldierMgr_removeFromList3(v12, a1 + 7184);
  FIELD_U32(a1, 7092) = 1;
  FIELD_U32(a1, 7128) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1076))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1044))(a1);
  v13 = **v4;
  v14 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v13 + 84);
  v19[0] = &sead__SafeStringBase__vtable;
  v19[1] = "ef_magic";
  v15 = v14(v13, v19);
  (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)**v4 + 108))(**v4, v15, v19);
  sub_602372C0(a1 + 7804, 1046, v19, 0);
  LODWORD(a3.x) = v19[3];
  LODWORD(a3.y) = v19[7];
  LODWORD(a3.z) = v19[11];
  return LightSource_update1((LightSource *)(a1 + 8264), 34, &a3, 0, 0, 0, 0, 0, 0);
}
