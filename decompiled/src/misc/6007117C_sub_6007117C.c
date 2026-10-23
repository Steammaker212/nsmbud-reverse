/* sub_6007117C
 * address: 0x6007117C   size: 1052   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6007117C(ActiveCollider *a1, int a2)
{
  char v2; // r12
  StageActor *owner; // r4
  Actor *v6; // r5
  int v7; // r7
  char v8; // r12
  bool v9; // zf
  int v10; // r7
  char v11; // r12
  float v12; // s16
  float v13; // s0
  int v14; // r0
  char v15; // r12
  int v16; // r4
  unsigned int childCount; // r0
  int v18; // r6
  float v19; // s16
  float v20; // s18
  int ProfileId; // r0
  bool v22; // zf

  owner = FIELD_U32(a1, 0x40);
  v6 = *(Actor **)(a2 + 64);
  if ( ((unsigned int)&dword_60C81738 & ~(1611076004 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C81738) )
  {
    dword_60C81734 = (int)&off_60BC1FA8;
    _cxa_guard_release(&dword_60C81738);
  }
  if ( owner )
  {
    v7 = (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C81734);
    if ( v7 )
      v7 = (int)owner;
    v9 = v6 == 0;
    if ( v6 )
      v9 = v7 == 0;
    if ( !v9 )
    {
      if ( (unsigned int)BYTE1(v6[6].field_34) - 1 > 1 )
      {
        v14 = FIELD_U32(a2, 140);
        if ( v14 == 2 )
        {
          FIELD_U8(a1, 0x6E) |= 2u;
          v14 = FIELD_U32(a2, 140);
        }
        if ( v14 == 1 )
          FIELD_U8(a1, 0x6E) |= 2u;
        if ( Actor__getProfileId(v6) == 373 )
        {
          FIELD_U8(a1, 0x6E) |= 2u;
          if ( ((unsigned int)&dword_60C81104 & ~(1611076632 << v15) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
          {
            dword_60C81100 = (int)&off_60BC66E8;
            _cxa_guard_release(&dword_60C81104);
          }
          if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v6, 0x0))(v6, &dword_60C81100) == 1 && sub_60090A40(v6) == 1 )
          {
            v16 = 0;
            childCount = v6[190].childCount;
            if ( childCount >= 4 )
              childCount = 0;
            v18 = *(_DWORD *)(PlayerMgr_instance + 4 * childCount + 32);
            if ( v18 )
            {
              v19 = FIELD_F32(v18, 108);
              v20 = FIELD_F32(v7, 108);
              sub_60095164(v6);
              if ( v20 > v19 )
                v16 = 1;
              SE_PLY_CRASH_KOOPA_ref(v6, v16);
              sub_6010005C(v6, FIELD_S8(v18, 84));
              (*(void (__fastcall **)(Actor *, int *))(FIELD_U32(v6, 0x0) + 192))(v6, &dword_60C821E0);
            }
            FIELD_U8(a2, 110) |= 2u;
          }
        }
        ProfileId = Actor__getProfileId(v6);
        v22 = ProfileId == 392;
        if ( ProfileId == 392 )
          v22 = (FIELD_U32(v6, 0x14) & 0x100) == 0;
        if ( v22 && (v6[93].vtable & 1) != 0 )
        {
          sub_602EE7B8(v6, v6[1].vtable, SLOBYTE(v6[1].heap));
          FIELD_U8(a2, 110) |= 2u;
        }
      }
      else
      {
        if ( ((unsigned int)&dword_60C7B374 & ~(1611076152 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
        {
          dword_60C7B370 = (int)&off_60BC00B0;
          _cxa_guard_release(&dword_60C7B374);
        }
        if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v6, 0x0))(v6, &dword_60C7B370) == 1 )
        {
          v10 = *(_DWORD *)sub_60008598(ActorMgr__instance, 373, FIELD_U32(ActorMgr__instance, 27172));
          if ( ((unsigned int)&dword_60C81104 & ~(1611076300 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
          {
            dword_60C81100 = (int)&off_60BC66E8;
            _cxa_guard_release(&dword_60C81104);
          }
          if ( v10 && (**(int (__fastcall ***)(int, int *))v10)(v10, &dword_60C81100) == 1 )
          {
            if ( FIELD_U32(v10, 15240) != SLOBYTE(v6[1].heap) )
            {
              FIELD_U8(a1, 0x6E) |= 2u;
              v12 = *(float *)(sub_6075F950(v6) + 4);
              ActiveCollider_getBottom(a1);
              if ( v12 >= v13
                && (*(int (__fastcall **)(Actor *, ActiveCollider *, int))(FIELD_U32(v6, 0x0) + 1164))(v6, a1, a2) == 1 )
              {
                FIELD_U32(v10, 9436) = SLOBYTE(v6[1].heap);
                FIELD_U32(v10, 9440) = 60;
              }
            }
          }
          else
          {
            FIELD_U8(a1, 0x6E) |= 2u;
            (*(void (__fastcall **)(Actor *, ActiveCollider *, int))(FIELD_U32(v6, 0x0) + 1164))(v6, a1, a2);
          }
        }
      }
    }
  }
}
