/* sub_602C672C
 * address: 0x602C672C   size: 1028   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C672C(_DWORD *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  char v3; // r12
  Actor *v7; // r4
  int v8; // r6
  StateBase *CurrentState; // r0
  int v10; // r5
  char v11; // r12
  StateBase *v12; // r0
  int v13; // r5
  float v14; // s0
  float v15; // s2
  int v16; // r0
  bool v17; // zf
  StateBase *v18; // r0
  int v19; // r5
  float CenterX; // s16
  float v21; // s20
  float CenterY; // s18
  float v23; // s18
  float v24; // s0
  float v25; // s0
  char v26; // r12
  float v28; // [sp+0h] [bp-48h] BYREF
  float v29; // [sp+4h] [bp-44h]

  v7 = &FIELD_U32(a3, 0x40);
  if ( ((unsigned int)dword_60C7B430 & ~(1613522780 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
  {
    Enemy_RTTI = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C7B430);
  }
  v8 = 1;
  if ( v7 && (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v7, 0x0))(v7, &Enemy_RTTI) == 1 )
  {
    if ( Actor__getProfileId(v7) == 562 )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 1521));
      v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v10 == (*(int (**)(void))(dword_60C916D4 + 8))() )
      {
        v12 = StateMgr__getCurrentState((StateMgr *)&v7[76].heap);
        v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
        if ( v13 == (*(int (**)(void))(dword_60C916D4 + 8))() )
          *((_BYTE *)a1 + 6312) = 1;
      }
      v14 = *((float *)a1 + 27);
      v15 = *(float *)&FIELD_U8(v7 + (1) * 80, 0x1C);
      v16 = a1[20];
      if ( v15 < v14 == v16 )
        goto LABEL_15;
      v17 = v15 == v14;
      if ( v15 == v14 )
        v17 = FIELD_U32(v7 + (1) * 80, 0x0) == v16;
      if ( v17 )
      {
LABEL_15:
        if ( *((float *)a1 + 7031) <= 0.0 )
        {
          a1[20] = v16 ^ 1;
          *((float *)a1 + 30) = -*((float *)a1 + 30);
          *((float *)a1 + 33) = -*((float *)a1 + 33);
          if ( ((unsigned int)&dword_60C916FC & ~(1613523244 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C916FC) )
          {
            dword_60C916F8 = (int)&off_60BE5584;
            _cxa_guard_release(&dword_60C916FC);
          }
          if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v7, 0x0))(v7, &dword_60C916F8) == 1 )
          {
            LOBYTE(v7[351].field_40) = 1;
            v18 = StateMgr__getCurrentState((StateMgr *)(a1 + 1521));
            v19 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v18, 0x0) + 2))(v18);
            if ( v19 != (*(int (**)(void))(dword_60C916D4 + 8))() )
            {
              CenterX = ActiveCollider_getCenterX(a3);
              v21 = CenterX - ActiveCollider_getCenterX(a2);
              v28 = v21;
              CenterY = ActiveCollider_getCenterY(a3);
              v23 = CenterY - ActiveCollider_getCenterY(a2);
              v29 = v23;
              v24 = sqrtf((float)(v21 * v21) + (float)(v23 * v23));
              if ( v24 > 0.0 )
              {
                v25 = 16.0 / v24;
                v21 = v25 * v21;
                v23 = v25 * v23;
                v28 = v21;
                v29 = v23;
              }
              v28 = *((float *)a1 + 27) + v21;
              v29 = *((float *)a1 + 28) + v23;
              (*(void (__fastcall **)(Actor *, float *))(FIELD_U32(v7, 0x0) + 724))(v7, &v28);
            }
          }
          if ( *((_BYTE *)a1 + 6312) )
          {
            return 0;
          }
          else
          {
            (*(void (__fastcall **)(_DWORD *))(*a1 + 660))(a1);
            *((_BYTE *)a1 + 6312) = 1;
            if ( ((unsigned int)&dword_60C916FC & ~(1613523636 << v26) & 1) == 0 && _cxa_guard_acquire(&dword_60C916FC) )
            {
              dword_60C916F8 = (int)&off_60BE5584;
              _cxa_guard_release(&dword_60C916FC);
            }
            v8 = 0;
            if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v7, 0x0))(v7, &dword_60C916F8) == 1 )
              LOBYTE(v7[78].field_48) = 1;
          }
        }
        else
        {
          return 0;
        }
      }
    }
    else if ( Actor__getProfileId(v7) == 563 || Actor__getProfileId(v7) == 564 )
    {
      Enemy__collisionThrowableObject(a1, (int)a2, (int)a3);
    }
  }
  return v8;
}
