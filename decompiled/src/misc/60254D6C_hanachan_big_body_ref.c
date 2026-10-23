/* hanachan_big_body_ref
 * address: 0x60254D6C   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall hanachan_big_body_ref(_DWORD *a1, int a2)
{
  char v2; // r12
  int v5; // r6
  void *ResArchiveById; // r5
  void *Model2; // r6
  ModelWrapper *v8; // r7
  ModelWrapper *v9; // r0
  _BYTE v11[32]; // [sp+18h] [bp-20h] BYREF

  if ( ((unsigned int)&unk_60C8E040 & ~(1613057420 << v2) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60C8E040) )
  {
    dword_60C8E04C = (int)&sead__SafeStringBase__vtable;
    dword_60C8E050 = (int)"hanachan_big_body";
    dword_60C8E054 = (int)&sead__SafeStringBase__vtable;
    dword_60C8E058 = (int)"hanachan_big_bodyS";
    sub_60000288();
    _cxa_guard_release((__guard *)&unk_60C8E040);
  }
  v5 = a1[12];
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a2 + 12), 0);
  Model2 = (void *)Resource_getModel2(
                     ResArchiveById,
                     (sead__SafeString *)((char *)&unk_60C8E040 + 8 * (v5 & 1) + 12),
                     2,
                     0,
                     0,
                     0,
                     0,
                     0,
                     0);
  v8 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v9 = sub_60421830(v8, Model2, 2, 0, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v9, (int)ResArchiveById, 0, 0);
  a1[1] = v8;
  (*(void (__fastcall **)(_BYTE *, _DWORD *))(*a1 + 28))(v11, a1);
  return sub_60421938(v8, (int)ResArchiveById, (int)v11);
}
