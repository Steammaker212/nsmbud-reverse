/* sub_60814720
 * address: 0x60814720   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60814720(int a1, int a2, int a3, float *a4)
{
  int *result; // r0
  int **v7; // r5
  unsigned int v8; // r0
  int v9; // [sp+4h] [bp-1Ch] BYREF
  char v10[8]; // [sp+8h] [bp-18h] BYREF

  result = sub_60810664((_DWORD *)a1, a2, a3, a4);
  v7 = (int **)result;
  if ( a4 )
  {
    if ( !result || (result = *(int **)a4) != 0 )
    {
      if ( !v7 )
        return result;
      goto LABEL_9;
    }
  }
  else if ( !result )
  {
    return result;
  }
  v8 = FIELD_U32(a1, 124);
  if ( v8 <= 3 )
  {
    v9 = 1 << v8;
    strcpy(v10, "ff&?");
    sub_60808570(SoundSystem_instance, v7, (float *)&v9);
  }
LABEL_9:
  result = (int *)FIELD_U8(a1, 317);
  if ( !FIELD_U8(a1, 317) )
  {
    result = *v7;
    if ( *v7 )
      return (int *)sub_608B032C(result, 0, 0.24);
  }
  return result;
}
