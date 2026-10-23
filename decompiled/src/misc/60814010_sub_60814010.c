/* sub_60814010
 * address: 0x60814010   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60814010(int a1, int a2, float *a3)
{
  int *result; // r0
  int **v6; // r5
  unsigned int v7; // r0
  int v8; // [sp+4h] [bp-1Ch] BYREF
  char v9[8]; // [sp+8h] [bp-18h] BYREF

  result = sub_6080F39C((_DWORD *)a1, a2, a3);
  v6 = (int **)result;
  if ( a3 )
  {
    if ( !result || (result = *(int **)a3) != 0 )
    {
      if ( !v6 )
        return result;
      goto LABEL_9;
    }
  }
  else if ( !result )
  {
    return result;
  }
  v7 = FIELD_U32(a1, 124);
  if ( v7 <= 3 )
  {
    v8 = 1 << v7;
    strcpy(v9, "ff&?");
    sub_60808570(SoundSystem_instance, v6, (float *)&v8);
  }
LABEL_9:
  result = (int *)FIELD_U8(a1, 317);
  if ( !FIELD_U8(a1, 317) )
  {
    result = *v6;
    if ( *v6 )
      return (int *)sub_608B032C(result, 0, 0.24);
  }
  return result;
}
