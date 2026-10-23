/* sub_6010672C
 * address: 0x6010672C   size: 752   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6010672C(int a1)
{
  int result; // r0
  _BYTE *v3; // r10
  unsigned int v4; // r1
  int *v5; // r9
  Actor *v6; // r6
  bool v7; // zf
  Actor *v8; // r8
  Actor *v9; // r5
  bool v10; // zf
  Actor *v11; // r0
  _BYTE *v12; // r0
  int v13; // r1
  int v14; // r8
  int v15; // r5
  int v16; // r0
  int v17; // r8
  int v18; // r7
  int v19; // r0
  unsigned int v20; // s0
  float *v21; // r1
  float v22; // s0
  float v23; // s0
  int v24; // s0

  v3 = (_BYTE *)(a1 + 6776);
  result = FIELD_U8(a1, 6776);
  if ( result )
    return result;
  v5 = (int *)(a1 + 6772);
  v4 = FIELD_U32(a1, 6772);
  if ( v4 )
  {
    v6 = (Actor *)ActorMgrRelated_getById(ActorMgr__instance + 27168, v4);
    goto LABEL_5;
  }
  v14 = FIELD_U8(a1, 28);
  v15 = FIELD_U32(ActorMgr__instance, 27180);
  v16 = sub_60008598(ActorMgr__instance, 11, FIELD_U32(ActorMgr__instance, 27172));
  if ( v16 == v15 )
    goto LABEL_29;
  while ( 1 )
  {
    v6 = *(Actor **)v16;
    if ( *(unsigned __int8 *)(*(_DWORD *)v16 + 28) == v14 )
      break;
    v16 = sub_60008598(ActorMgr__instance, 11, v16 + 4);
    if ( v16 == v15 )
      goto LABEL_29;
  }
  if ( !v6 )
  {
LABEL_29:
    v17 = FIELD_U8(a1, 28);
    v18 = FIELD_U32(ActorMgr__instance, 27180);
    v19 = sub_60008598(ActorMgr__instance, 12, FIELD_U32(ActorMgr__instance, 27172));
    if ( v19 == v18 )
      goto LABEL_32;
    while ( 1 )
    {
      v6 = *(Actor **)v19;
      if ( *(unsigned __int8 *)(*(_DWORD *)v19 + 28) == v17 )
        break;
      v19 = sub_60008598(ActorMgr__instance, 12, v19 + 4);
      if ( v19 == v18 )
        goto LABEL_32;
    }
LABEL_5:
    if ( v6 )
      goto LABEL_6;
LABEL_32:
    result = *v5;
    if ( *v5 )
    {
      *v5 = 0;
      *v3 = 1;
      return 1;
    }
    return result;
  }
LABEL_6:
  result = Actor__getProfileId(v6);
  v7 = result == 11;
  if ( result != 11 )
    v7 = result == 12;
  if ( !v7 )
    goto LABEL_32;
  v8 = 0;
  v9 = 0;
  if ( result == 11 )
    v8 = v6;
  if ( result == 12 )
    v9 = v6;
  if ( result == 11 )
    v9 = 0;
  v10 = v8 == 0;
  if ( !v8 )
    v10 = v9 == 0;
  if ( !v10 )
  {
    if ( !*v5 )
    {
      v11 = v9;
      if ( v8 )
        v11 = v8;
      *v5 = FIELD_U32(v11, 0x8);
      if ( v8 )
      {
        v12 = (char *)&v8[79].vtable + 1;
        v13 = ((unsigned int)FIELD_U32(v8, 0x18) >> 20) & 0xF;
      }
      else
      {
        v12 = (char *)&v9[79].heap + 1;
        v13 = ((unsigned int)FIELD_U32(v9, 0x18) >> 20) & 0xF | ((unsigned int)FIELD_U32(v9, 0x18) >> 8) & 0xF0;
      }
      v20 = v13;
      v21 = (float *)(a1 + 504);
      v22 = (float)v20;
      if ( !*v12 )
        v21 = (float *)(a1 + 500);
      *v21 = (float)((float)((float)(v22 * 16.0) + (float)(v22 * 16.0)) + 64.0) + *v21;
    }
    if ( v8 )
    {
      sub_606AE1F0(v8, 0);
      if ( !BYTE1(v8[79].vtable) )
        goto LABEL_43;
    }
    else
    {
      sub_606C3FD8(v9, 0);
      if ( !BYTE1(v9[79].heap) )
      {
LABEL_43:
        result = AreaTask_getWrappedXPos(AreaTask_intance);
        FIELD_U32(a1, 108) = v24;
        return result;
      }
    }
    FIELD_F32(a1, 112) = v23 + FIELD_F32(a1, 6668);
    return a1 + 6668;
  }
  return result;
}
