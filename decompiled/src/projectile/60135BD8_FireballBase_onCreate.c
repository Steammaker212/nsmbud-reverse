/* FireballBase_onCreate
 * address: 0x60135BD8   size: 460   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall FireballBase_onCreate(FireballBase *this)
{
  int v2; // r5
  int profileFlags; // r0
  ActiveColliderMgr *v4; // r6
  int v6; // [sp+4h] [bp-14h] BYREF

  v2 = 2;
  if ( (*(int (__fastcall **)(FireballBase *))(FIELD_U32(this, 0x0) + 0xFC))(this) == 1 )
  {
    v2 = 2;
    FIELD_U32(this, 0x1840) = 0;
    FIELD_U32(this, 0x1844) = 2;
    FIELD_U32(this, 0x270) = (int)&FIELD_U32(this, 0x1824);
    if ( (*(int (__fastcall **)(FireballBase *))(FIELD_U32(this, 0x0) + 248))(this) == 1 )
    {
      (*(void (__fastcall **)(FireballBase *))(FIELD_U32(this, 0x0) + 256))(this);
      (*(void (__fastcall **)(FireballBase *))(FIELD_U32(this, 0x0) + 260))(this);
      profileFlags = FIELD_U32(this, 0x238);
      FIELD_U32(this, 0x26C) = (int)&FIELD_U32(this, 0x1800);
      FIELD_U32(this, 0x238) = profileFlags | 0x80;
      FIELD_F32(this, 0x23C) = 0.0;
      FIELD_F32(this, 0x240) = 0.0;
      FIELD_F32(this, 0x244) = 0.0;
      FIELD_U32(this, 0x1810) = 5;
      ActiveCollider__init(&FIELD_U32(this, 0x1924), &FIELD_U32(this, 0x0), &stru_60AF666C, (int)&FIELD_U32(this, 0x1A54));
      v4 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, &FIELD_U32(this, 0x1924))
        && !ActiveColliderMgr_isInCreateList(v4, &FIELD_U32(this, 0x1924)) )
      {
        ActiveColliderMgr_addToCreateList(v4, &FIELD_U32(this, 0x1924));
      }
      LightMask__init(&FIELD_U32(this, 0x17D4), 0, 2);
      *(float *)&FIELD_U32(this, 0x17FC) = (*(float (__fastcall **)(FireballBase *))(FIELD_U32(this, 0x0) + 288))(this);
      ((void (__fastcall *)(int *, int *, int *, Vec3 *, _DWORD))physics_21893E8)(
        &v6,
        &FIELD_U32(this, 0x184C),
        &FIELD_U32(this, 0x1A58),
        &FIELD_U32(this, 0x6C),
        (unsigned __int8)FIELD_U8(this, 0x56));
      FIELD_U32(this, 0x1848) = v6;
      FIELD_U32(this, 0x1854) = LODWORD(FIELD_F32(this, 0x6C));
      FIELD_U32(this, 0x1858) = LODWORD(FIELD_F32(this, 0x70));
      FIELD_U32(this, 0x185C) = LODWORD(FIELD_F32(this, 0x74));
      (*(void (__fastcall **)(FireballBase *))(FIELD_U32(this, 0x0) + 264))(this);
      StateMgr__changeState(&FIELD_U32(this, 0x17C4), &stru_60C877D8._._);
      return 1;
    }
  }
  return v2;
}
