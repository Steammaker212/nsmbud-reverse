/* sub_60515390
 * address: 0x60515390   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60515390(int a1)
{
  int v1; // r8
  int v2; // r0
  int v3; // r5
  int v4; // r4
  int i; // r1
  int v6; // r4
  int j; // r1
  float v8; // s16

  v1 = 0;
  v2 = sub_6047482C(a1 + 48, 0);
  v3 = v2;
  if ( v2 )
  {
    v4 = FIELD_U32(v2, 56);
    (*(void (__fastcall **)(int *))(dword_60CA869C + 12))(&dword_60CA869C);
    (*(void (__fastcall **)(int *))(dword_60CA869C + 12))(&dword_60CA869C);
    if ( dword_60CA86A0 == v4 )
      goto LABEL_19;
    for ( i = 1; *(unsigned __int8 *)(dword_60CA86A0 + i - 1) == *(unsigned __int8 *)(v4 + i - 1); i += 2 )
    {
      if ( !*(_BYTE *)(dword_60CA86A0 + i - 1) )
        goto LABEL_19;
      if ( i >= 524289 || *(unsigned __int8 *)(dword_60CA86A0 + i) != *(unsigned __int8 *)(v4 + i) )
        break;
      if ( !*(_BYTE *)(dword_60CA86A0 + i) )
        goto LABEL_19;
    }
    v6 = FIELD_U32(v3, 56);
    (*(void (__fastcall **)(int *))(dword_60CA8694 + 12))(&dword_60CA8694);
    (*(void (__fastcall **)(int *))(dword_60CA8694 + 12))(&dword_60CA8694);
    if ( dword_60CA8698 == v6 )
    {
LABEL_19:
      if ( (FIELD_U8(v3, 51) & 1) != 0 )
      {
        v8 = FIELD_F32(v3, 16);
        return v8 == (float)(unsigned int)sub_608502E4(v3);
      }
    }
    else
    {
      for ( j = 1; *(unsigned __int8 *)(dword_60CA8698 + j - 1) == *(unsigned __int8 *)(v6 + j - 1); j += 2 )
      {
        if ( !*(_BYTE *)(dword_60CA8698 + j - 1) )
          goto LABEL_19;
        if ( j >= 524289 || *(unsigned __int8 *)(dword_60CA8698 + j) != *(unsigned __int8 *)(v6 + j) )
          break;
        if ( !*(_BYTE *)(dword_60CA8698 + j) )
          goto LABEL_19;
      }
    }
  }
  return v1;
}
