/* sub_607D4818
 * address: 0x607D4818   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D4818(int a1, int a2)
{
  int v4; // r0
  void *v5; // r10
  void *Model; // r7
  ModelWrapper *v7; // r6
  ModelWrapper *v8; // r0
  int v10; // [sp+18h] [bp-30h] BYREF
  int v11; // [sp+1Ch] [bp-2Ch]
  int v12; // [sp+20h] [bp-28h]
  int v13; // [sp+24h] [bp-24h] BYREF

  sub_607929C0(a1, &dword_60CC5440[2 * a2 + 10], &dword_60CC5448);
  *(_DWORD *)a1 = off_60C261E4;
  FIELD_U32(a1, 240) = 0;
  sub_6040E90C(a1 + 244, 25);
  FIELD_U32(a1, 308) = 0;
  FIELD_U32(a1, 312) = 0;
  FIELD_U8(a1, 316) = 0;
  FIELD_U32(a1, 320) = 0;
  FIELD_U32(a1, 324) = 0;
  FIELD_U32(a1, 328) = a2;
  FIELD_U32(a1, 332) = 0;
  FIELD_U32(a1, 336) = 0;
  FIELD_U8(a1, 340) = 0;
  FIELD_U32(a1, 688) = 0;
  FIELD_U32(a1, 692) = 0;
  memset((void *)(a1 + 344), 0, 341);
  FIELD_U32(a1, 164) = 7;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  sub_608DEB0C(&v10, 1, (int)&v13);
  if ( v10 < v11 )
    *(_DWORD *)(v12 + 4 * v10++) = FIELD_U32(a1, 20);
  v4 = sub_60792ACC(a1);
  v5 = *(void **)(a1 + 16);
  if ( v4 == 1 )
    Model = (void *)Resource_getModel(v5, (sead__SafeString *)&dword_60CC5450, 6, 3, 2, 4, 0, 0, 1, 0);
  else
    Model = (void *)Resource_getModel2(v5, (sead__SafeString *)&dword_60CC5450, 3, 2, 4, 0, 0, 0, 0);
  v7 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v8 = ModelWrapper_ctor(v7, Model, 3, 2, 4, 0, 0);
  ModelWrapper_setup(v8, v5, &v10, 0);
  FIELD_U32(a1, 240) = v7;
  FIELD_U32(a1, 24) = v7;
  FIELD_U32(a1, 344) = (*(int (__fastcall **)(void *, int *))(*(_DWORD *)FIELD_U32(v7, 0x0) + 124))(
                            FIELD_U32(v7, 0x0),
                            &dword_60CC5458);
  return a1;
}
