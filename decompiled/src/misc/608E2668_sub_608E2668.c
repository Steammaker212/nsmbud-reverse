/* sub_608E2668
 * address: 0x608E2668   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E2668(int a1, _DWORD *a2, int a3)
{
  signed int v4; // r6
  void *v7; // r7
  const void *v8; // r9
  int v9; // r0
  bool v10; // cc
  signed int v11; // r0

  v4 = 0;
  *(_DWORD *)a1 = off_60C5C1B4;
  FIELD_U32(a1, 16) = 0;
  FIELD_U32(a1, 20) = 0;
  FIELD_U32(a1, 24) = a1;
  FIELD_U32(a1, 28) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)a1);
  *(_DWORD *)a1 = off_60C5C1B4;
  FIELD_U32(a1, 36) = a1 + 44;
  FIELD_U32(a1, 32) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 40) = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 32);
  **(_BYTE **)(a1 + 36) = 0;
  FIELD_U32(a1, 32) = &off_60BD4C20;
  FIELD_U8(a1, 76) = 1;
  v7 = *(void **)(a1 + 36);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v8 = (const void *)a2[1];
  if ( v7 != v8 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v9 = a2[1];
    while ( *(_BYTE *)(v9 + v4) )
    {
      if ( !*(_BYTE *)(v9 + v4 + 1) )
      {
        ++v4;
        break;
      }
      if ( !*(_BYTE *)(v9 + v4 + 2) )
      {
        v4 += 2;
        break;
      }
      v10 = v4 + 2 < 0x80000;
      v4 += 3;
      if ( !v10 )
      {
        v4 = 0;
        break;
      }
    }
    v11 = FIELD_U32(a1, 40);
    if ( v4 >= v11 )
      v4 = v11 - 1;
    qmemcpy(v7, v8, v4);
    *((_BYTE *)v7 + v4) = 0;
  }
  *(_DWORD *)a1 = &off_60C5BF04;
  FIELD_U32(a1, 80) = 0;
  FIELD_U32(a1, 84) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 88) = FIELD_U32(a3, 4);
  return a1;
}
