/* sub_602074A0
 * address: 0x602074A0   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602074A0(int a1)
{
  int (__fastcall ***v2)(_DWORD, int *); // r5
  char v3; // r12
  int v4; // r6
  double v5; // d0
  float v6; // s2
  float v7; // s4
  int result; // r0

  v2 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                              ActorMgr__instance + 27168,
                                              *(_DWORD *)(FIELD_U32(a1, 312) + 8));
  if ( ((unsigned int)&dword_60C8A34C & ~(1612739804 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8A34C) )
  {
    dword_60C8A348 = (int)&off_60BD4E08;
    _cxa_guard_release(&dword_60C8A34C);
  }
  if ( v2 )
  {
    v4 = (**v2)(v2, &dword_60C8A348);
    if ( v4 )
      v4 = (int)v2;
  }
  else
  {
    v4 = 0;
  }
  v5 = sub_601A8F98(v4);
  FIELD_U32(a1, 80) = LODWORD(v5);
  FIELD_F32(a1, 88) = v6;
  FIELD_F32(a1, 84) = *((float *)&v5 + 1) + -90.0;
  FIELD_U32(a1, 180) = FIELD_U32(v4, 180);
  v7 = FIELD_F32(v4, 128);
  if ( v7 == 2.0 )
  {
    result = 1077936128;
    FIELD_U32(a1, 128) = 1077936128;
    FIELD_U32(a1, 132) = 1077936128;
  }
  else
  {
    FIELD_F32(a1, 128) = v7;
    FIELD_U32(a1, 132) = FIELD_U32(v4, 132);
    result = FIELD_U32(v4, 136);
  }
  FIELD_U32(a1, 136) = result;
  if ( sqrtf(
         (float)((float)(v6 - FIELD_F32(a1, 336)) * (float)(v6 - FIELD_F32(a1, 336)))
       + (float)((float)(*(float *)&v5 - FIELD_F32(a1, 328)) * (float)(*(float *)&v5 - FIELD_F32(a1, 328)))) <= 140.0 )
    return (int)StateMgr__changeState((StateMgr *)(a1 + 296), (StateBase *)&unk_60C8C6E4);
  return result;
}
