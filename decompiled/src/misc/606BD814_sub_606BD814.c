/* sub_606BD814
 * address: 0x606BD814   size: 804   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_606BD814(ActiveCollider *a1, int a2)
{
  Actor *v2; // r8
  int owner; // r5
  bool v6; // zf
  StateBase *CurrentState; // r0
  int v8; // r7
  float result; // s0
  char v10; // r12
  unsigned int heap_low; // r0
  bool v12; // zf
  float CenterY; // s16
  unsigned int v14; // r0
  int v15; // r2
  int v16; // r2
  int v17; // r1
  float CenterX; // s16
  float v19; // s0
  float v20; // s2
  unsigned int v21; // r0
  int v22; // r1
  float *v23; // r0
  float v24; // s4

  owner = (int)FIELD_U32(a1, 0x40);
  v6 = owner == 0;
  if ( owner )
  {
    v2 = *(Actor **)(a2 + 64);
    v6 = v2 == 0;
  }
  if ( !v6 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(owner + 6084));
    v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v8 != (*(int (**)(void))(dword_60CBA6CC + 8))() && Actor__getProfileId(v2) != 520 )
    {
      if ( FIELD_U32(a1, 0x8C) == 9
        && (FIELD_U8(a2, 149) & 2) != 0
        && BYTE1(v2[6].field_34) == 3
        && (FIELD_U8(owner, 6124) & 4) != 0 )
      {
        FIELD_U32(owner, 80) = sub_6000ADDC(owner, (int)v2);
        FIELD_U32(owner, 6148) = 16;
        StateMgr__changeState((StateMgr *)(owner + 6084), (StateBase *)&unk_60CBA6EC);
      }
      if ( (FIELD_U32(a2, 136) | 2) == 2 )
      {
        heap_low = SLOBYTE(v2[1].heap);
        if ( heap_low <= 3 && !*(_WORD *)(owner + 2 * heap_low + 6128) )
        {
          v12 = FIELD_U8(owner, 6884) == 0;
          if ( FIELD_U8(owner, 6884) )
            v12 = (FIELD_U8(owner, 6124) & 0x30) == 0;
          if ( !v12 )
          {
            if ( ((unsigned int)&dword_60C7B37C & ~(1617680716 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
            {
              dword_60C7B378 = (int)&off_60BC00BC;
              _cxa_guard_release(&dword_60C7B37C);
            }
            if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v2, 0x0))(v2, &dword_60C7B378) == 1 )
            {
              if ( FIELD_F32(owner, 124) < 0.0 )
              {
                CenterY = ActiveCollider_getCenterY((ActiveCollider *)a2);
                if ( CenterY < ActiveCollider_getBottom(a1) )
                {
                  v14 = LOBYTE(v2[1].heap);
                  v15 = 0;
                  if ( v14 < 4 )
                    v15 = (char)v14;
                  *(_WORD *)(owner + 2 * v15 + 6128) = 16;
                  v16 = 19;
                  FIELD_F32(owner, 120) = (float)byte_60B057DC[FIELD_U32(owner, 80)] * 1.5;
                  FIELD_U32(owner, 124) = 1077936128;
                  FIELD_U32(owner, 128) = 0;
                  v17 = owner;
                  if ( FIELD_U8(owner, 6054) )
                    FIELD_U32(owner, 124) = 1069547520;
LABEL_35:
                  (*(void (__fastcall **)(Actor *, int, int))(FIELD_U32(v2, 0x0) + 1168))(v2, v17, v16);
                  return result;
                }
              }
              CenterX = ActiveCollider_getCenterX(a1);
              v19 = ActiveCollider_getCenterX((ActiveCollider *)a2);
              v20 = FIELD_F32(owner, 120);
              if ( CenterX <= v19 )
              {
                if ( v20 <= 0.0 )
                {
LABEL_37:
                  v23 = (float *)(&FIELD_U32(a1, 0x0) + FIELD_U32(a2, 136));
                  v24 = v23[60];
                  *(float *)&v2[16].settings1 = *(float *)&v2[16].settings1 - (float)(v23[44] * 0.5);
                  *(float *)&v2[16].settigns2 = *(float *)&v2[16].settigns2 - (float)(v24 * 0.5);
                  result = *(float *)&v2[16].movementId + 0.0;
                  *(float *)&v2[16].movementId = result;
                  return result;
                }
              }
              else if ( v20 >= 0.0 )
              {
                goto LABEL_37;
              }
              sub_605CC8F8(owner);
              v21 = LOBYTE(v2[1].heap);
              v22 = 0;
              if ( v21 < 4 )
                v22 = (char)v21;
              *(_WORD *)(owner + 2 * v22 + 6128) = 16;
              v17 = owner;
              v16 = 4;
              goto LABEL_35;
            }
          }
        }
      }
    }
  }
  return result;
}
