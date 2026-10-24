/* sub_601F17B0
 * address: 0x601F17B0   size: 1008   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601F17B0(StateMgr *a1)
{
  int result; // r0
  int v3; // r1
  int v4; // r0
  _DWORD *v5; // r0
  int v6; // r0
  StateBase *nextState; // r0
  int v8; // [sp+0h] [bp-28h] BYREF
  int target[9]; // [sp+4h] [bp-24h] BYREF

  result = (int)FIELD_U32(a1 + (37) * 16, 0x4);
  switch ( result )
  {
    case 0:
      ((void (__fastcall *)(StateMgr *))FIELD_U32(a1, 0x0)[24].vtable)(a1);
      ((void (__fastcall *)(StateMgr *, int))FIELD_U32(a1, 0x0)[20].vtable)(a1, 1);
      ((void (__fastcall *)(StateMethodExecuter **, float, float, float, float))loc_60832560)(
        &FIELD_U32(a1 + (43) * 16, 0x8),
        0.05,
        0.1,
        0.004,
        0.002);
      ((void (__fastcall *)(StateMethodExecuter **, float, float, float, float))loc_60832560)(
        &FIELD_U32(a1 + (12) * 16, 0x8),
        5.0,
        0.1,
        *(float *)&FIELD_U32(a1 + (43) * 16, 0x8),
        0.002);
      FIELD_U32(a1 + (36) * 16, 0xC) = (StateBase *)(0x100000000LL
                                     / ((int (__fastcall *)(StateMgr *, float))FIELD_U32(a1, 0x0)[21].vtable)(
                                         a1,
                                         *(float *)&FIELD_U32(a1 + (12) * 16, 0x8)));
      result = (int)FIELD_U32(a1 + (11) * 16, 0x4);
      if ( (unsigned int)result >= 0xB8E38E39 )
        goto LABEL_20;
      break;
    case 1:
      ((void (__fastcall *)(StateMgr *))FIELD_U32(a1, 0x0)[24].vtable)(a1);
      ((void (__fastcall *)(StateMgr *, int))FIELD_U32(a1, 0x0)[20].vtable)(a1, 1);
      ((void (__fastcall *)(StateMethodExecuter **, float, float, float, float))loc_60832560)(
        &FIELD_U32(a1 + (43) * 16, 0x8),
        0.055,
        0.1,
        0.01,
        0.008);
      ((void (__fastcall *)(StateMethodExecuter **, float, float, float, float))loc_60832560)(
        &FIELD_U32(a1 + (12) * 16, 0x8),
        9.5,
        0.1,
        *(float *)&FIELD_U32(a1 + (43) * 16, 0x8),
        0.008);
      result = (int)FIELD_U32(a1 + (11) * 16, 0x4);
      if ( result >= -477218587 )
      {
        if ( result < 0 )
        {
          v3 = (int)&FIELD_U32(a1 + (36) * 16, 0xC)[-24064];
          if ( v3 <= 0x1000000 )
            v3 = 0x1000000;
          FIELD_U32(a1 + (36) * 16, 0xC) = (StateBase *)v3;
        }
        result -= 465288123;
        if ( (unsigned int)result <= 0x24444444 )
        {
          v4 = 120;
          FIELD_U32(a1 + (43) * 16, 0xC) = (StateBase *)9437184;
          FIELD_U32(a1 + (44) * 16, 0x0) = (StateExecuter *)589824;
          goto LABEL_19;
        }
      }
      break;
    case 2:
      ((void (__fastcall *)(StateMgr *))FIELD_U32(a1, 0x0)[24].vtable)(a1);
      *(float *)&FIELD_U32(a1 + (36) * 16, 0x8) = (float)(*(float *)&FIELD_U32(a1 + (5) * 16, 0x4) - *(float *)&FIELD_U32(a1 + (38) * 16, 0x0))
                                              / (float)(sqrtf(
                                                          (float)((float)(*(float *)&FIELD_U32(a1 + (5) * 16, 0x8)
                                                                        - *(float *)&FIELD_U32(a1 + (38) * 16, 0x4))
                                                                * (float)(*(float *)&FIELD_U32(a1 + (5) * 16, 0x8)
                                                                        - *(float *)&FIELD_U32(a1 + (38) * 16, 0x4)))
                                                        + (float)((float)(*(float *)&FIELD_U32(a1 + (5) * 16, 0x0)
                                                                        - *(float *)&FIELD_U32(a1 + (37) * 16, 0xC))
                                                                * (float)(*(float *)&FIELD_U32(a1 + (5) * 16, 0x0)
                                                                        - *(float *)&FIELD_U32(a1 + (37) * 16, 0xC))))
                                                      / *(float *)&FIELD_U32(a1 + (12) * 16, 0x8));
      FIELD_U32(a1 + (38) * 16, 0x8) = (StateMethodExecuter *)sub_608332B0(&a1[5], &FIELD_U32(a1 + (37) * 16, 0xC));
      sub_608322C0(
        (int *)&a1[12],
        (int *)&FIELD_U32(a1 + (38) * 16, 0x8),
        (signed int *)&FIELD_U32(a1 + (43) * 16, 0xC),
        (signed int *)&a1[44]);
      FIELD_U32(a1 + (11) * 16, 0x4) = (StateBase *)FIELD_U32(a1 + (12) * 16, 0x0);
      target[0] = 18350080;
      v8 = 0x100000;
      moveValueTo((int *)&FIELD_U32(a1 + (43) * 16, 0xC), target, &v8);
      target[0] = 1146880;
      v8 = 0x10000;
      moveValueTo((int *)&a1[44], target, &v8);
      if ( (int)FIELD_U32(a1 + (11) * 16, 0x4) >= 1193046472 )
        ((void (__fastcall *)(StateMethodExecuter **, float, float, float, float))loc_60832560)(
          &FIELD_U32(a1 + (7) * 16, 0x8),
          *(float *)&FIELD_U32(a1 + (36) * 16, 0x8) * -1.5,
          0.1,
          0.06,
          0.05);
      ((void (__fastcall *)(StateMgr *))loc_60168DF8)(a1);
      result = (int)&FIELD_U32(a1 + (44) * 16, 0x4)[-1].id + 3;
      FIELD_U32(a1 + (44) * 16, 0x4) = (StateBase *)result;
      if ( !result )
      {
        *(float *)&FIELD_U32(a1 + (13) * 16, 0x4) = *(float *)&FIELD_U32(a1 + (40) * 16, 0x0) * 3.0;
        goto LABEL_20;
      }
      break;
    case 3:
      ((void (__fastcall *)(StateMgr *))FIELD_U32(a1, 0x0)[24].vtable)(a1);
      ((void (__fastcall *)(StateMgr *))loc_60168DF8)(a1);
      result = (int)FIELD_U32(a1 + (44) * 16, 0x4);
      FIELD_U32(a1 + (44) * 16, 0x4) = (StateBase *)(result + 1);
      if ( result >= 120 )
        goto LABEL_20;
      break;
    case 4:
      ((void (__fastcall *)(StateMgr *))loc_60168DF8)(a1);
      sub_601E4F60(dword_60C8B13C, (unsigned int)FIELD_U32(a1 + (45) * 16, 0x0));
      sub_601E4C88((_DWORD *)dword_60C8B13C, 83, &FIELD_U32(a1 + (5) * 16, 0x0));
      v5 = (_DWORD *)sub_601FEE28(dword_60C8C188);
      sub_6016E884(v5);
      goto LABEL_20;
    case 5:
      ((void (__fastcall *)(StateMgr *))loc_60168DF8)(a1);
      v6 = sub_601FEE28(dword_60C8C188);
      sub_6016E8F8(v6);
      v4 = 60;
LABEL_19:
      FIELD_U32(a1 + (44) * 16, 0x4) = (StateBase *)v4;
LABEL_20:
      result = (int)&a1[37].FIELD_U32(nextState, 0x0) + 1;
      FIELD_U32(a1 + (37) * 16, 0x4) = (StateBase *)result;
      break;
    case 6:
      ((void (__fastcall *)(StateMgr *))loc_60168DF8)(a1);
      nextState = FIELD_U32(a1 + (44) * 16, 0x4);
      if ( nextState )
      {
        result = (int)&nextState[-1].id + 3;
        FIELD_U32(a1 + (44) * 16, 0x4) = (StateBase *)result;
      }
      else
      {
        ((void (__fastcall *)(StateMgr *))FIELD_U32(a1, 0x0)[4].methodExecuter.owner)(a1);
        result = (int)StateMgr__changeState(a1 + 18, (StateBase *)&unk_60C8B708);
      }
      break;
    default:
      return result;
  }
  return result;
}
