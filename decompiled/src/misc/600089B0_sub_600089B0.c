/* sub_600089B0
 * address: 0x600089B0   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_600089B0(int a1, int a2)
{
  int v2; // r5
  int v3; // r6
  _BYTE *v4; // r4
  int v5; // r7
  int v6; // r0
  int v7; // r1
  int v8; // r0

  dword_60C7B3E4 = a2;
  FIELD_U8(a1, 27200) = 1;
  v2 = FIELD_U32(a1, 22972);
  if ( v2 != a1 + 22968 )
  {
    v3 = FIELD_U32(a1, 22980);
    v4 = (_BYTE *)(v2 - v3);
    v5 = a1 + 22968 - v3;
    do
    {
      if ( !v4[19] )
      {
        v6 = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v4 + 44))(v4);
        v7 = 0;
        if ( v6 == 1 )
        {
          v8 = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v4 + 48))(v4);
          v7 = 1;
          if ( v8 )
            v7 = 2;
        }
        (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)v4 + 52))(v4, v7);
      }
      v2 = FIELD_U32(v2, 4);
      v4 = (_BYTE *)(v2 - v3);
    }
    while ( v2 - v3 != v5 );
  }
  dword_60C7B3E4 = 0;
  return &dword_60C7B3E4;
}
