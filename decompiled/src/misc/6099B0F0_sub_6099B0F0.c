/* sub_6099B0F0
 * address: 0x6099B0F0   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099B0F0(int a1, unsigned int a2, unsigned __int16 a3, int a4)
{
  int v6; // r1
  unsigned __int8 v7; // r0
  unsigned __int8 *v8; // r9
  int v9; // r8
  int i; // r7
  int v11; // r1
  int v12; // r3
  int v13; // r5

  v6 = a1 + a4;
  v8 = (unsigned __int8 *)(a1 + a4 + 4172);
  v7 = *v8;
  if ( !*v8 )
    return 0;
  v9 = 0;
  for ( i = FIELD_U8(v6, 4204); ; ++i )
  {
    v11 = *(_DWORD *)(FIELD_U32(a1, 4308) + 4 * i);
    if ( !v11 )
      break;
    if ( v11 >= 1 )
    {
      v12 = 0;
      while ( *(_DWORD *)(FIELD_U32(a1, 4312) + 16 * i + 4 * v12) > a2
           || *(_DWORD *)(FIELD_U32(a1, 4316) + 16 * i + 4 * v12) < a2 )
      {
        if ( ++v12 >= v11 )
          goto LABEL_15;
      }
      break;
    }
LABEL_15:
    if ( ++v9 >= v7 )
      return 0;
  }
  if ( FIELD_U8(a1, 4277) )
    v13 = (*(int (**)(void))(a1 + 4284))();
  else
    v13 = 0;
  sub_6099B034((_DWORD *)a1, i, v13);
  if ( !nn__fontll__ScalableFontEngine__CheckGlyphExist(
          (nn__fontll__ScalableFontEngine *)(FIELD_U32(a1, 8) + 180 * v13),
          a2) )
  {
    v7 = *v8;
    goto LABEL_15;
  }
  return sub_60998FD0((int *)(a1 + 28), a2, a3, (unsigned __int16)i);
}
