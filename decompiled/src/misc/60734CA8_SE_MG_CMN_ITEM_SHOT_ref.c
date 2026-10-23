/* SE_MG_CMN_ITEM_SHOT_ref
 * address: 0x60734CA8   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_MG_CMN_ITEM_SHOT_ref(int a1, float a2)
{
  _BYTE *v3; // r5
  StateMethodExecuter *result; // r0
  int v5; // r2

  v3 = (_BYTE *)(a1 + 6800);
  if ( FIELD_U8(a1, 6800) )
    CollisionMgr_process((_BYTE *)(a1 + 648), a2);
  result = (StateMethodExecuter *)(a1 + 6780);
  if ( FIELD_U8(a1, 6780) == 1 )
  {
    if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    {
      *v3 = 0;
      FIELD_F32(a1, 124) = -FIELD_F32(a1, 124);
      FIELD_U32(a1, 100) = -1097229926;
      CollisionMgr_vf14(a1 + 648);
    }
    if ( FIELD_F32(a1, 112) <= (float)(FIELD_F32(dword_60CC6484, 132) + -64.0) )
    {
      return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBDD60);
    }
    else
    {
      CollisionActor__handleGravity((CollisionActor *)a1);
      CollisionActor__handleSpeed((CollisionActor *)a1);
      result = (StateMethodExecuter *)(FIELD_U32(a1, 164) - 0x2000000);
      FIELD_U32(a1, 164) = result;
    }
  }
  else if ( !FIELD_U8(a1, 6780) )
  {
    v5 = FIELD_U32(a1, 6764);
    if ( v5 )
    {
      result = (StateMethodExecuter *)(v5 - 1);
      FIELD_U32(a1, 6764) = v5 - 1;
      if ( v5 == 7 )
      {
        EffectData_create(264, (Vec3 *)(a1 + 108), 0, 0);
        return (StateMethodExecuter *)sub_60807EF0(SoundSystem_instance, "SE_MG_CMN_ITEM_SHOT", 0, 1);
      }
    }
    else
    {
      FIELD_U32(a1, 136) = -1065353216;
      FIELD_U64(a1, 120) = 0x400CCCCD3F800000LL;
      FIELD_U32(a1, 100) = -1092196762;
      LOBYTE(FIELD_U32(result, 0x0)) = 1;
    }
  }
  return result;
}
