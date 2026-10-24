/* sub_60161E68
 * address: 0x60161E68   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60161E68(ColliderBase *a1, Vec3 **a2, float *a3)
{
  int vtable; // r2
  int v7; // r0
  int v8; // r1
  bool v9; // cc
  int v10; // r2
  _DWORD *containingHeap; // r3
  int v12; // r2
  int v13; // r6
  int v14; // t1

  sub_601603E8(a1);
  FIELD_U32(a1, 0x98) = *a2;
  FIELD_U32(a1, 0x9C) = a2[1];
  FIELD_U32(a1, 0xA0) = (char *)a2[2];
  FIELD_U32(a1, 0xA4) = (char *)a2[3];
  FIELD_U32(a1, 0xA8) = (char *)a2[4];
  FIELD_F32(a1, 0xAC) = *a3;
  FIELD_F32(a1, 0xB0) = a3[1];
  FIELD_F32(a1, 0xBC) = a3[2];
  FIELD_F32(a1, 0xC0) = a3[3];
  FIELD_U32(a1, 0xF4) = (int)a3[5];
  ColliderBase_setSolidity(a1, 1);
  vtable = FIELD_U32(a1 + (1) * 340, 0x0);
  if ( vtable >= 1 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = vtable > (unsigned int)v8;
      v10 = *((_DWORD *)a3 + 4);
      containingHeap = (_DWORD *)FIELD_U32(a1 + (1) * 340, 0x4);
      ++v8;
      v14 = *(_DWORD *)(v10 + v7);
      v12 = v10 + v7;
      v13 = v14;
      if ( v9 )
        containingHeap = (_DWORD *)((char *)containingHeap + v7);
      v7 += 8;
      *containingHeap = v13;
      containingHeap[1] = FIELD_U32(v12, 4);
      vtable = FIELD_U32(a1 + (1) * 340, 0x0);
    }
    while ( v8 < vtable );
  }
  FIELD_U32(a1, 0x90) = 0;
  (*(void (__fastcall **)(ColliderBase *))(FIELD_U32(a1, 0x0) + 64))(a1);
  (*(void (__fastcall **)(ColliderBase *))(FIELD_U32(a1, 0x0) + 48))(a1);
  return (*(int (__fastcall **)(ColliderBase *))(FIELD_U32(a1, 0x0) + 52))(a1);
}
