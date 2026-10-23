/* CS_W8a_CloudBG_ref_2
 * address: 0x60227944   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CS_W8a_CloudBG_ref_2(int a1, int a2, float a3, float a4)
{
  int result; // r0
  unsigned int v9; // r6
  int v10; // r8
  const char *v11; // r7
  int v12; // r1
  int i; // r2
  int v14; // r0
  int (**v15)(); // [sp+0h] [bp-40h] BYREF
  const char *v16; // [sp+4h] [bp-3Ch]

  result = FIELD_U32(a1, 660);
  if ( result >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = 0;
      if ( result > v9 )
        v10 = *(_DWORD *)(FIELD_U32(a1, 668) + 4 * v9);
      v15 = &sead__SafeStringBase__vtable;
      v16 = "CS_W8a_CloudBG";
      (*(void (__fastcall **)(int))(FIELD_U32(v10, 8) + 12))(v10 + 8);
      (*(void (__fastcall **)(int))(FIELD_U32(v10, 8) + 12))(v10 + 8);
      v11 = *(const char **)(v10 + 12);
      ((void (__fastcall *)(int (***)()))v15[3])(&v15);
      if ( v11 == v16 )
        break;
      v12 = FIELD_U32(v10, 12);
      for ( i = 1; *(unsigned __int8 *)(v12 + i - 1) == (unsigned __int8)v16[i - 1]; i += 2 )
      {
        if ( !*(_BYTE *)(v12 + i - 1) )
          goto LABEL_16;
        if ( i > 0x80000 || *(unsigned __int8 *)(v12 + i) != (unsigned __int8)v16[i] )
          break;
        if ( !*(_BYTE *)(v12 + i) )
          goto LABEL_16;
      }
      result = FIELD_U32(a1, 660);
      if ( (int)++v9 >= result )
        return result;
    }
LABEL_16:
    v14 = 0;
    if ( FIELD_U32(a1, 660) > v9 )
      v14 = *(_DWORD *)(FIELD_U32(a1, 668) + 4 * v9);
    return CS_W8a_ref(v14, a2, a3, a4);
  }
  return result;
}
