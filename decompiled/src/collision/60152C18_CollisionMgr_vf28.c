/* CollisionMgr_vf28
 * address: 0x60152C18   size: 980   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CollisionMgr_vf28(int a1)
{
  int v2; // r5
  ColliderMgr *v3; // r8
  ColliderListNode *first; // r7
  ColliderBase *owner; // r6
  StageActor *v6; // r0
  StageActor *v7; // r1
  StageActor *v8; // r2
  bool v9; // zf
  int v10; // r0
  ColliderListNode *v11; // r7
  ColliderBase *v12; // r6
  StageActor *v13; // r0
  StageActor *v14; // r1
  StageActor *v15; // r2
  bool v16; // zf
  int v17; // r0
  int result; // r0
  ColliderListNode *v19; // r7
  ColliderBase *v20; // r6
  unsigned __int8 v21; // r1
  int v22; // r1
  int v23; // r2
  bool v24; // zf
  ColliderListNode *v25; // r6
  ColliderBase *v26; // r7
  unsigned __int8 v27; // r1
  int v28; // r1
  int v29; // r2
  bool v30; // zf

  v2 = a1 + 2272;
  v3 = ColliderMgr_instance;
  first = ColliderMgr_instance->lists[1].first;
  while ( first )
  {
    owner = FIELD_U32(first, 0x0);
    first = FIELD_U32(first, 0x4);
    if ( ((int (__fastcall *)(int, float *))loc_6015A9F4)(v2, &FIELD_F32(owner, 0x70))
      && *(_QWORD *)&FIELD_U32(owner, 0x130)
      && **(unsigned __int8 **)(a1 + 2212) == *(unsigned __int8 *)FIELD_U32(owner, 0xA0)
      && (**(_BYTE **)(a1 + 2216) & *FIELD_U32(owner, 0xA4)) != 0
      && !FIELD_U8(owner, 0xDC) )
    {
      v6 = FIELD_U32(owner, 0x90);
      if ( !v6 )
        goto LABEL_15;
      v7 = *(StageActor **)(a1 + 2196);
      if ( v7 != v6 )
      {
        v8 = *(StageActor **)(a1 + 2200);
        v9 = v8 == v6;
        if ( v8 != v6 )
          v9 = v7 == (StageActor *)FIELD_U32(owner, 0x94);
        if ( !v9 && !FIELD_U8(v6, 0x13) )
        {
LABEL_15:
          v10 = FIELD_U32(a1, 88);
          if ( v10 < FIELD_U32(a1, 92) )
          {
            *(_DWORD *)(FIELD_U32(a1, 96) + 4 * v10) = owner;
            ++FIELD_U32(a1, 88);
          }
        }
      }
    }
  }
  v11 = FIELD_U32(v3, 0x10)[5].first;
  while ( v11 )
  {
    v12 = FIELD_U32(v11, 0x0);
    v11 = FIELD_U32(v11, 0x4);
    if ( ((int (__fastcall *)(int, float *))loc_6015A9F4)(v2, &FIELD_F32(v12, 0x70))
      && *(_QWORD *)&FIELD_U32(v12, 0x130)
      && **(unsigned __int8 **)(a1 + 2212) == *(unsigned __int8 *)FIELD_U32(v12, 0xA0)
      && (**(_BYTE **)(a1 + 2216) & *FIELD_U32(v12, 0xA4)) != 0
      && !FIELD_U8(v12, 0xDC) )
    {
      v13 = FIELD_U32(v12, 0x90);
      if ( !v13 )
        goto LABEL_31;
      v14 = *(StageActor **)(a1 + 2196);
      if ( v14 != v13 )
      {
        v15 = *(StageActor **)(a1 + 2200);
        v16 = v15 == v13;
        if ( v15 != v13 )
          v16 = v14 == (StageActor *)FIELD_U32(v12, 0x94);
        if ( !v16 && !FIELD_U8(v13, 0x13) )
        {
LABEL_31:
          v17 = FIELD_U32(a1, 88);
          if ( v17 < FIELD_U32(a1, 92) )
          {
            *(_DWORD *)(FIELD_U32(a1, 96) + 4 * v17) = v12;
            ++FIELD_U32(a1, 88);
          }
        }
      }
    }
  }
  sub_608DECA0(a1 + 88, sub_60152FF4);
  result = FIELD_U32(a1, 2528) | FIELD_U32(a1, 2536) | FIELD_U32(a1, 2544) | FIELD_U32(a1, 2552);
  if ( (result & 0x1C) != 0 )
  {
    v19 = FIELD_U32(v3, 0x10)[2].first;
    while ( v19 )
    {
      v20 = FIELD_U32(v19, 0x0);
      v19 = FIELD_U32(v19, 0x4);
      result = ((int (__fastcall *)(int, float *))loc_6015A9F4)(v2, &FIELD_F32(v20, 0x70));
      if ( result )
      {
        result = FIELD_U32(v20, 0x130) | FIELD_U32(v20, 0x134);
        if ( *(_QWORD *)&FIELD_U32(v20, 0x130) )
        {
          result = *(unsigned __int8 *)FIELD_U32(v20, 0xA0);
          if ( **(unsigned __int8 **)(a1 + 2212) == result )
          {
            v21 = **(_BYTE **)(a1 + 2216);
            result = (unsigned __int8)(v21 & *FIELD_U32(v20, 0xA4));
            if ( (v21 & *FIELD_U32(v20, 0xA4)) != 0 )
            {
              result = (unsigned __int8)FIELD_U8(v20, 0xDC);
              if ( !FIELD_U8(v20, 0xDC) )
              {
                result = (int)FIELD_U32(v20, 0x90);
                if ( !result )
                  goto LABEL_48;
                v22 = FIELD_U32(a1, 2196);
                if ( v22 != result )
                {
                  v23 = FIELD_U32(a1, 2200);
                  v24 = v23 == result;
                  if ( v23 != result )
                    v24 = v22 == FIELD_U32(v20, 0x94);
                  if ( !v24 )
                  {
                    result = FIELD_U8(result, 19);
                    if ( !result )
                    {
LABEL_48:
                      result = FIELD_U32(a1, 88);
                      if ( result < FIELD_U32(a1, 92) )
                      {
                        *(_DWORD *)(FIELD_U32(a1, 96) + 4 * result) = v20;
                        result = FIELD_U32(a1, 88) + 1;
                        FIELD_U32(a1, 88) = result;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v25 = FIELD_U32(v3, 0x10)[3].first;
    while ( v25 )
    {
      v26 = FIELD_U32(v25, 0x0);
      v25 = FIELD_U32(v25, 0x4);
      result = ((int (__fastcall *)(int, float *))loc_6015A9F4)(v2, &FIELD_F32(v26, 0x70));
      if ( result )
      {
        result = FIELD_U32(v26, 0x130) | FIELD_U32(v26, 0x134);
        if ( *(_QWORD *)&FIELD_U32(v26, 0x130) )
        {
          result = *(unsigned __int8 *)FIELD_U32(v26, 0xA0);
          if ( **(unsigned __int8 **)(a1 + 2212) == result )
          {
            v27 = **(_BYTE **)(a1 + 2216);
            result = (unsigned __int8)(v27 & *FIELD_U32(v26, 0xA4));
            if ( (v27 & *FIELD_U32(v26, 0xA4)) != 0 )
            {
              result = (unsigned __int8)FIELD_U8(v26, 0xDC);
              if ( !FIELD_U8(v26, 0xDC) )
              {
                result = (int)FIELD_U32(v26, 0x90);
                if ( !result )
                  goto LABEL_64;
                v28 = FIELD_U32(a1, 2196);
                if ( v28 != result )
                {
                  v29 = FIELD_U32(a1, 2200);
                  v30 = v29 == result;
                  if ( v29 != result )
                    v30 = v28 == FIELD_U32(v26, 0x94);
                  if ( !v30 )
                  {
                    result = FIELD_U8(result, 19);
                    if ( !result )
                    {
LABEL_64:
                      result = FIELD_U32(a1, 88);
                      if ( result < FIELD_U32(a1, 92) )
                      {
                        *(_DWORD *)(FIELD_U32(a1, 96) + 4 * result) = v26;
                        result = FIELD_U32(a1, 88) + 1;
                        FIELD_U32(a1, 88) = result;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
