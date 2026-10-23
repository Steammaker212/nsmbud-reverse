/* sub_604EB7FC
 * address: 0x604EB7FC   size: 960   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604EB7FC(int a1)
{
  char v1; // r12
  int v3; // r0
  int (__fastcall ***v4)(_DWORD, int *); // r6
  int v5; // r5
  int v6; // r2
  int *v7; // r6
  int v8; // r1
  int *v9; // r8
  float *v10; // r10
  unsigned int *v11; // r9
  int v12; // r2
  unsigned int v13; // r1
  int v14; // r2
  int v15; // r1
  int v16; // r2
  unsigned int v17; // r1
  int v18; // r2
  int v19; // r1
  int v20; // r2
  unsigned int v21; // r1
  int v22; // r2
  StateMethodExecuter *result; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0

  v3 = FIELD_U32(dword_60CD0B40, 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 5u )
    v3 += 20;
  v4 = *(int (__fastcall ****)(_DWORD, int *))(*(_DWORD *)v3 + 76);
  if ( ((unsigned int)&dword_60C8D9F4 & ~(1615771704 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D9F4) )
  {
    dword_60C8D9F0 = (int)&off_60BD9634;
    _cxa_guard_release(&dword_60C8D9F4);
  }
  if ( v4 )
  {
    v5 = (**v4)(v4, &dword_60C8D9F0);
    if ( v5 )
      v5 = (int)v4;
  }
  else
  {
    v5 = 0;
  }
  v7 = (int *)(a1 + 23744);
  v6 = FIELD_U32(a1, 23744);
  v8 = FIELD_U32(a1, 23712);
  v9 = (int *)(a1 + 16492);
  v10 = (float *)(a1 + 23732);
  v11 = (unsigned int *)(a1 + 16488);
  if ( v6 < 1 )
  {
    if ( v6 >= 0 || FIELD_F32(a1, 3600) <= FIELD_F32(v5, 168) )
      goto LABEL_19;
  }
  else if ( FIELD_F32(a1, 3608) >= FIELD_F32(v5, 164) )
  {
    goto LABEL_19;
  }
  v12 = 3 * v6;
  FIELD_F32(v8, 24) = FIELD_F32(v8, 24) + (float)((float)v12 * *v10);
  FIELD_U8(v8, 64) |= 0x10u;
  v13 = (int)(FIELD_U32(a1, 3616) + v12 + *v11) % (int)*v11;
  v14 = *v9;
  if ( *v11 > v13 )
    v14 += 24 * v13;
  sub_604ED658(a1 + 36, v13, v14, 0.0);
LABEL_19:
  v15 = FIELD_U32(a1, 23716);
  if ( *v7 <= 0 )
  {
    if ( *v7 >= 0 || FIELD_F32(a1, 7188) <= FIELD_F32(v5, 168) )
      goto LABEL_27;
  }
  else if ( FIELD_F32(a1, 7196) >= FIELD_F32(v5, 164) )
  {
    goto LABEL_27;
  }
  v16 = 3 * *v7;
  FIELD_F32(v15, 24) = FIELD_F32(v15, 24) + (float)((float)v16 * *v10);
  FIELD_U8(v15, 64) |= 0x10u;
  v17 = (int)(FIELD_U32(a1, 7204) + v16 + *v11) % (int)*v11;
  v18 = *v9;
  if ( *v11 > v17 )
    v18 += 24 * v17;
  sub_604ED658(a1 + 3624, v17, v18, 0.0);
LABEL_27:
  v19 = FIELD_U32(a1, 23720);
  if ( *v7 <= 0 )
  {
    if ( *v7 >= 0 || FIELD_F32(a1, 10776) <= FIELD_F32(v5, 168) )
      goto LABEL_35;
  }
  else if ( FIELD_F32(a1, 10784) >= FIELD_F32(v5, 164) )
  {
    goto LABEL_35;
  }
  v20 = 3 * *v7;
  FIELD_F32(v19, 24) = FIELD_F32(v19, 24) + (float)((float)v20 * *v10);
  FIELD_U8(v19, 64) |= 0x10u;
  v21 = (int)(FIELD_U32(a1, 10792) + v20 + *v11) % (int)*v11;
  v22 = *v9;
  if ( *v11 > v21 )
    v22 += 24 * v21;
  sub_604ED658(a1 + 7212, v21, v22, 0.0);
LABEL_35:
  result = (StateMethodExecuter *)FIELD_U8(a1, 23751);
  if ( !FIELD_U8(a1, 23751) )
  {
    FIELD_U32(a1, 23736) = FIELD_U32(a1, 23740);
    sub_604ED78C(a1 + 36);
    v24 = FIELD_U32(a1, 23712);
    FIELD_F32(v24, 24) = FIELD_F32(v24, 24) - (float)(*v10 * (float)*v7);
    FIELD_U8(v24, 64) |= 0x10u;
    sub_604ED78C(a1 + 3624);
    v25 = FIELD_U32(a1, 23716);
    FIELD_F32(v25, 24) = FIELD_F32(v25, 24) - (float)(*v10 * (float)*v7);
    FIELD_U8(v25, 64) |= 0x10u;
    sub_604ED78C(a1 + 7212);
    v26 = FIELD_U32(a1, 23720);
    FIELD_F32(v26, 24) = FIELD_F32(v26, 24) - (float)(*v10 * (float)*v7);
    FIELD_U8(v26, 64) |= 0x10u;
    return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60CA6060);
  }
  return result;
}
