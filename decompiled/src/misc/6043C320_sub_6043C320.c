/* sub_6043C320
 * address: 0x6043C320   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6043C320(int a1, int a2)
{
  signed int v3; // r6
  char *v5; // r5
  const char *v6; // r9
  bool v7; // cc
  signed int v8; // r0
  int (**v10)(); // [sp+0h] [bp-28h] BYREF
  const char *v11; // [sp+4h] [bp-24h]

  v3 = 0;
  v10 = &sead__SafeStringBase__vtable;
  v11 = "arc";
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
  v5 = *(char **)(a1 + 36);
  ((void (__fastcall *)(int (***)()))v10[3])(&v10);
  v6 = v11;
  if ( v5 != v11 )
  {
    ((void (__fastcall *)(int (***)()))v10[3])(&v10);
    while ( v11[v3] )
    {
      if ( !v11[v3 + 1] )
      {
        ++v3;
        break;
      }
      if ( !v11[v3 + 2] )
      {
        v3 += 2;
        break;
      }
      v7 = v3 + 2 < 0x80000;
      v3 += 3;
      if ( !v7 )
      {
        v3 = 0;
        break;
      }
    }
    v8 = FIELD_U32(a1, 40);
    if ( v3 >= v8 )
      v3 = v8 - 1;
    qmemcpy(v5, v6, v3);
    v5[v3] = 0;
  }
  *(_DWORD *)a1 = off_60C5C120;
  FIELD_U32(a1, 80) = a2;
  return a1;
}
