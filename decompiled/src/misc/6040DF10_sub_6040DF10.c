/* sub_6040DF10
 * address: 0x6040DF10   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040DF10(_DWORD *a1, int a2)
{
  int v4; // r7
  int v5; // r8
  __int16 v6; // r4
  int v7; // r2
  int v8; // r1
  bool v9; // cc
  char *v10; // r1
  int v11; // r1
  int result; // r0

  v4 = dword_60CC6D78;
  v5 = sub_6040D4F0(a1);
  v6 = FIELD_U16(v4, 520);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  v7 = 0;
  v8 = a1[1];
  while ( *(_BYTE *)(v8 + v7) )
  {
    if ( !*(_BYTE *)(v8 + v7 + 1) )
    {
      ++v7;
      break;
    }
    if ( !*(_BYTE *)(v8 + v7 + 2) )
    {
      v7 += 2;
      break;
    }
    v9 = v7 + 2 < 0x80000;
    v7 += 3;
    if ( !v9 )
    {
      v7 = 0;
      break;
    }
  }
  v10 = (char *)(v8 + 2);
  if ( v7 < 2 )
    v10 = &byte_60B3BA34;
  if ( *v10 != 75 )
    return sub_6040D864(a1);
  if ( a2 == 2 )
    return 24;
  if ( a2 == 1 )
    goto LABEL_18;
  if ( a2 )
    return sub_6040D864(a1);
  v11 = FIELD_U32(v4, 516);
  switch ( v11 )
  {
    case 2:
      result = ((unsigned __int16)(v6 & 0x100) >> 8) | 0x2E;
      if ( v5 == 8 )
        return 48;
      break;
    case 1:
      result = ((unsigned __int16)(v6 & 0x100) >> 8) | 0x1C;
      if ( v5 == 8 )
        return 30;
      break;
    case 0:
LABEL_18:
      result = ((unsigned __int16)(v6 & 0x100) >> 8) + 25;
      if ( v5 == 8 )
        return 27;
      return result;
    default:
      return sub_6040D864(a1);
  }
  return result;
}
