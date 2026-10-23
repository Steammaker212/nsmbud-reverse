/* sub_602A0F08
 * address: 0x602A0F08   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602A0F08(int a1)
{
  int v2; // r6
  int Area; // r7
  int v4; // r0
  bool v5; // zf
  int v6; // r5
  __int16 *v7; // r0
  float v8; // s0
  float v9; // s2
  ActiveColliderMgr *v10; // r6
  float v12[10]; // [sp+18h] [bp-28h] BYREF

  v2 = FIELD_U8(a1, 22);
  Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
  v4 = sub_60727908(Area, v2);
  v5 = v4 == 0;
  v6 = 2;
  if ( v4 )
    v5 = FIELD_U16(v4, 4) == 0;
  if ( !v5 )
  {
    v7 = (__int16 *)sub_60727950(Area, v2);
    if ( v7 )
    {
      v6 = 1;
      v8 = (float)*v7;
      FIELD_F32(a1, 108) = v8;
      v9 = -(float)v7[1];
      FIELD_F32(a1, 112) = v9;
      v12[0] = v8;
      v12[1] = v9;
      sub_607D8938(a1 + 6404, v12, FIELD_U8(a1, 22), 1, 0, 1, 0);
      StateMgr__execute((StateMgr *)(a1 + 6424));
      FIELD_U32(a1, 108) = FIELD_U32(a1, 6460);
      FIELD_U32(a1, 112) = FIELD_U32(a1, 6464);
      FIELD_U32(a1, 144) = 1056964608;
      FIELD_U32(a1, 148) = 1056964608;
      FIELD_U32(a1, 152) = 1056964608;
      ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BE2764, 0);
      v10 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
        && !ActiveColliderMgr_isInCreateList(v10, (ActiveCollider *)(a1 + 188)) )
      {
        ActiveColliderMgr_addToCreateList(v10, (ActiveCollider *)(a1 + 188));
      }
      ((void (__fastcall *)(int))loc_602A10D0)(a1);
      LightSource_update1((LightSource *)(a1 + 6508), 60, (Vec3 *)(a1 + 108), 0, 0, 0, 0, 0, 0);
      LightSource_unkUpdate3((LightSource *)(a1 + 6508));
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9032C);
    }
  }
  return v6;
}
