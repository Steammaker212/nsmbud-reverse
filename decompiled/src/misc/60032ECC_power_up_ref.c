/* power_up_ref
 * address: 0x60032ECC   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall power_up_ref(int a1)
{
  int v2; // r0
  int v3; // r0
  __int16 v4; // r1
  char v5; // r1
  char v6; // r1
  int ResArchiveById; // r5
  _DWORD **v8; // r4
  int v9; // t1
  _DWORD *v10; // r0
  int v11; // r0
  int *v12; // r0
  int v13; // r0
  int v14; // r0
  int *v15; // r0
  int v16; // r0
  int v17; // r0
  void (__fastcall ***v18)(_DWORD, int, int *, _DWORD *, int *); // r0
  void (__fastcall *v19)(_DWORD, int, int *, _DWORD *, int *); // r6
  void (__fastcall ***v20)(_DWORD, int, int *, _DWORD *, int *); // r0
  void (__fastcall *v21)(_DWORD, int, int *, _DWORD *, int *); // r6
  void (__fastcall ***v22)(_DWORD, int, int *, _DWORD *, int *); // r0
  void (__fastcall *v23)(_DWORD, int, int *, _DWORD *, int *); // r6
  int (__fastcall ***v24)(_DWORD, int, int *, _DWORD *, int *); // r0
  int (__fastcall *v25)(_DWORD, int, int *, _DWORD *, int *); // r6
  int v27; // [sp+4h] [bp-24h] BYREF
  int v28; // [sp+8h] [bp-20h]
  _DWORD v29[7]; // [sp+Ch] [bp-1Ch] BYREF

  v2 = FIELD_U32(EnemyCounterMaybe_instance, 24);
  if ( v2 )
  {
    v3 = FIELD_U8(v2, 6121);
    v4 = 536;
    if ( v3 )
      v4 = 240;
    FIELD_U16(a1, 6276) = v4;
    v5 = 110;
    if ( v3 )
      v5 = -113;
    FIELD_U8(a1, 6304) = v5;
    v6 = 17;
    if ( v3 )
      v6 = 50;
    FIELD_U8(a1, 6305) = v6;
  }
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v9 = FIELD_U32(a1, 6300);
  v8 = (_DWORD **)(a1 + 6300);
  v10 = **(_DWORD ***)(v9 + 28);
  v27 = (int)&sead__SafeStringBase__vtable;
  v28 = (int)"power_up";
  ShuAnim_play(v10, ResArchiveById, (int)&v27);
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)(*v8)[7] + 4), 0);
  v11 = *(_DWORD *)(*v8)[7];
  FIELD_U32(v11, 20) = 0;
  FIELD_U32(v11, 28) |= 2u;
  *(_DWORD *)(*(_DWORD *)(*v8)[7] + 24) = 0;
  v12 = (int *)(*v8)[7];
  if ( (*v8)[6] > 1u )
    ++v12;
  v13 = *v12;
  v27 = (int)&sead__SafeStringBase__vtable;
  v28 = (int)"power_up";
  sub_60446088(v13, ResArchiveById, (int)&v27);
  v14 = (*v8)[7];
  if ( (*v8)[6] > 1u )
    v14 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v14 + 4), 0);
  v15 = (int *)(*v8)[7];
  if ( (*v8)[6] > 1u )
    ++v15;
  v16 = *v15;
  FIELD_U32(v16, 20) = 0;
  FIELD_U32(v16, 28) |= 2u;
  v17 = (*v8)[7];
  if ( (*v8)[6] > 1u )
    v17 += 4;
  *(_DWORD *)(*(_DWORD *)v17 + 24) = 0;
  v27 = -1146890486;
  v28 = -1146890486;
  v18 = (void (__fastcall ***)(_DWORD, int, int *, _DWORD *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)**v8 + 132))(
                                                                      **v8,
                                                                      0);
  v19 = **v18;
  v29[0] = 0;
  v19(v18, 3, &v27, v29, &dword_60B3B944);
  v20 = (void (__fastcall ***)(_DWORD, int, int *, _DWORD *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)**v8 + 132))(
                                                                      **v8,
                                                                      0);
  v21 = **v20;
  v29[0] = 0;
  v21(v20, 4, &v27, v29, &dword_60B3B944);
  v22 = (void (__fastcall ***)(_DWORD, int, int *, _DWORD *, int *))(*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)**v8 + 132))(
                                                                      **v8,
                                                                      1);
  v23 = **v22;
  v29[0] = 0;
  v23(v22, 4, &v27, v29, &dword_60B3B944);
  v24 = (int (__fastcall ***)(_DWORD, int, int *, _DWORD *, int *))(*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)**v8 + 132))(
                                                                     **v8,
                                                                     1);
  v25 = **v24;
  v29[0] = 0;
  return v25(v24, 5, &v27, v29, &dword_60B3B944);
}
