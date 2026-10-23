/* sub_608C2A9C
 * address: 0x608C2A9C   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C2A9C(_DWORD *a1, int a2)
{
  char v2; // lr
  _DWORD *v5; // r5
  int v6; // r6
  int result; // r0
  _DWORD *v8; // r0
  int v9; // r5
  void (*v10)(void); // r0

  v5 = a1 + 94;
  v6 = a1[94];
  if ( !v6 )
  {
    result = 0;
    if ( a2 != 1 )
      return result;
    v8 = (_DWORD *)sub_608C2698((int)a1, 16);
    v8[1] = -1;
    if ( a1[95] )
      v5 = (_DWORD *)a1[95];
    *v5 = v8;
    a1[95] = v8;
    *v8 = 0;
    v6 = a1[94];
  }
  v9 = a1[97];
  while ( (unsigned int)(a1 + 96) | ((((unsigned int)(a1 + 96) | (1619798796 << v2)) + 1) << v2) )
    ;
  if ( !nn__os__TrySendMessageQueue(a1 + 3, v6) )
  {
    result = 0;
    if ( a2 != 1 )
      return result;
    v10 = (void (*)(void))a1[2];
    if ( v10 )
      v10();
    nn__os__SendMessageQueue(a1 + 3, v6);
  }
  *(_DWORD *)(a1[94] + 8) = v9;
  ++a1[97];
  a1[94] = 0;
  a1[95] = 0;
  return v9;
}
