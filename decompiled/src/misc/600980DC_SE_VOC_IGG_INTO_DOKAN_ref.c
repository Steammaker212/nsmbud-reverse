/* SE_VOC_IGG_INTO_DOKAN_ref
 * address: 0x600980DC   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VOC_IGG_INTO_DOKAN_ref(StateActor *a1)
{
  float v2; // s16
  int v3; // s2
  float v4; // s0
  int *v5; // r0

  if ( !(*(int (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0) + 716))(a1) )
    (*(int (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0) + 720))(a1);
  v2 = 0.0;
  sub_60421AD4(*(_DWORD *)&a1[1]._.collisionMgr[348]);
  FIELD_U32(a1, 0x50) = StageActor__directionToPlayerX(a1, &FIELD_U32(a1, 0x6C)) ^ 1;
  if ( (*(int (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0) + 716))(a1)
    || (*(int (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0) + 720))(a1) == 1 )
  {
    v3 = 1029785518;
    v4 = 2.5;
    v5 = &dword_60C8287C;
  }
  else
  {
    v3 = 1036831949;
    v4 = 3.5;
    v2 = 1.0;
    v5 = &dword_60C82880;
  }
  LODWORD(FIELD_F32(a1, 0x68)) = v3;
  FIELD_F32(a1, 0x78) = v2;
  FIELD_F32(a1, 0x84) = v4;
  *(_DWORD *)&a1[1]._.collisionMgr[1392] = *v5;
  if ( FIELD_U32(a1, 0x50) == 1 )
  {
    FIELD_F32(a1, 0x78) = -v2;
    FIELD_F32(a1, 0x84) = -v4;
  }
  FIELD_F32(a1, 0x7C) = 0.0;
  FIELD_F32(a1, 0x64) = 0.0;
  return sub_608134CC(&a1[1]._._.aCollider.node3.next, "SE_VOC_IGG_INTO_DOKAN", *(__int16 *)&a1[1]._._.eventId2, 0);
}
