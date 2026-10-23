/* sub_60351840
 * address: 0x60351840   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60351840(_DWORD *a1)
{
  unsigned int v2; // r1
  int v3; // r3
  _DWORD *v4; // r3
  int v5; // r5
  _DWORD *v6; // r5
  unsigned int v7; // r0
  unsigned int v8; // r2

  sub_602A3EFC((int)(a1 + 1605), 24, 0.04);
  v2 = a1[20];
  v3 = 0;
  if ( v2 < 2 )
    v3 = a1[20];
  v4 = &a1[v3];
  v5 = v4[1577];
  a1[1576] = a1[2];
  v4[1577] = 0;
  sub_60351A90(a1, 0, v2 ^ 1);
  (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C94FBC);
  a1[1602] = 30;
  if ( v5 )
  {
    if ( sub_60351954(v5) )
    {
      v6 = (_DWORD *)sub_60351954(v5);
      if ( v6 )
      {
        v7 = a1[20];
        v6[1576] = v6[2];
        v8 = 0;
        if ( v7 < 2 )
          v8 = v7;
        v6[v8 + 1577] = 0;
        sub_60351A90(v6, 0, v7 ^ 1);
        (*(void (__fastcall **)(_DWORD *, int *))(*v6 + 192))(v6, &dword_60C94F3C);
      }
    }
  }
  return 1;
}
