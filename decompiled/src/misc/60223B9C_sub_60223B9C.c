/* sub_60223B9C
 * address: 0x60223B9C   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60223B9C(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v4; // r7
  int v5; // r8
  int v6; // r0
  int v7; // r9
  void *v8; // r6
  const void *v9; // r7
  int v10; // r0
  signed int v11; // r5
  bool v12; // cc
  signed int v13; // r0

  v4 = (_DWORD *)operator_new(0x1Cu);
  v4[1] = v4 + 3;
  *v4 = &BufferedSafeStringBase_char_vtable_probably;
  v4[2] = 14;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)v4);
  *(_BYTE *)v4[1] = 0;
  *v4 = &off_60BD9308;
  v5 = a1[74];
  v6 = v5;
  if ( v5 < a1[75] )
  {
    *(_DWORD *)(a1[76] + 4 * v5) = v4;
    v6 = a1[74] + 1;
    a1[74] = v6;
  }
  if ( v6 )
    v7 = *(_DWORD *)(a1[76] + 4 * v6 - 4);
  else
    v7 = 0;
  v8 = *(void **)(v7 + 4);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v9 = (const void *)a2[1];
  if ( v8 != v9 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v10 = a2[1];
    v11 = 0;
    while ( *(_BYTE *)(v10 + v11) )
    {
      if ( !*(_BYTE *)(v10 + v11 + 1) )
      {
        ++v11;
        break;
      }
      if ( !*(_BYTE *)(v10 + v11 + 2) )
      {
        v11 += 2;
        break;
      }
      v12 = v11 + 2 < 0x80000;
      v11 += 3;
      if ( !v12 )
      {
        v11 = 0;
        break;
      }
    }
    v13 = FIELD_U32(v7, 8);
    if ( v11 >= v13 )
      v11 = v13 - 1;
    qmemcpy(v8, v9, v11);
    *((_BYTE *)v8 + v11) = 0;
  }
  return v5;
}
