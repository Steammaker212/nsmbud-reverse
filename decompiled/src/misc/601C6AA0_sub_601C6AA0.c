/* sub_601C6AA0
 * address: 0x601C6AA0   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601C6AA0(int a1)
{
  int v1; // r1
  _BOOL4 result; // r0
  int v3; // r2
  unsigned int v4; // r1
  bool v5; // zf

  v1 = FIELD_U32(a1, 264);
  result = 0;
  if ( (v1 & 0xFFFFFFFE) == 6 )
    return result;
  if ( v1 >= 6 )
  {
    v4 = 0;
    if ( FIELD_U32(dword_60C99DEC, 48) != 7 )
    {
      v4 = 1;
      if ( FIELD_U32(dword_60C99DEC, 120) != 7 )
      {
        v4 = 2;
        if ( FIELD_U32(dword_60C99DEC, 192) != 7 )
        {
          v4 = 3;
          if ( FIELD_U32(dword_60C99DEC, 264) != 7 )
          {
            v4 = 4;
            if ( FIELD_U32(dword_60C99DEC, 336) != 7 )
            {
              v4 = 6;
              v5 = FIELD_U32(dword_60C99DEC, 408) == 7;
LABEL_15:
              if ( v5 )
                v4 = 5;
            }
          }
        }
      }
    }
  }
  else
  {
    v3 = dword_60AFC220[v1];
    v4 = 0;
    if ( FIELD_U32(dword_60C99DEC, 48) != v3 )
    {
      v4 = 1;
      if ( FIELD_U32(dword_60C99DEC, 120) != v3 )
      {
        v4 = 2;
        if ( FIELD_U32(dword_60C99DEC, 192) != v3 )
        {
          v4 = 3;
          if ( FIELD_U32(dword_60C99DEC, 264) != v3 )
          {
            v4 = 4;
            if ( FIELD_U32(dword_60C99DEC, 336) != v3 )
            {
              v4 = 6;
              v5 = FIELD_U32(dword_60C99DEC, 408) == v3;
              goto LABEL_15;
            }
          }
        }
      }
    }
  }
  if ( v4 >= 6 )
    v4 = 0;
  return *(_BYTE *)(dword_60C99DEC + 72 * v4 + 66) != 0;
}
