/* sub_601FF484
 * address: 0x601FF484   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601FF484()
{
  char v0; // r12
  int v1; // r6
  int result; // r0
  unsigned __int8 **v3; // r5
  unsigned __int8 *v4; // r7
  int v5; // r0
  bool v6; // zf

  v1 = dword_60CCF448;
  result = 5;
  if ( FIELD_U32(dword_60CCF448, 212) )
  {
    v3 = *(unsigned __int8 ***)(dword_60CCF448 + 220);
    while ( 1 )
    {
      v4 = *v3;
      if ( ((unsigned int)&dword_60C8C224 & ~(1612707056 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
      {
        dword_60C8C220 = (int)&off_60BD84A8;
        _cxa_guard_release(&dword_60C8C224);
      }
      v5 = (**(int (__fastcall ***)(unsigned __int8 *, int *))v4)(v4, &dword_60C8C220);
      v6 = v4 == 0;
      if ( v4 )
        v6 = (v5 ^ 1) == 1;
      if ( !v6 )
        break;
      if ( ++v3 == (unsigned __int8 **)(FIELD_U32(v1, 220) + 4 * FIELD_U32(v1, 212)) )
        return 5;
    }
    v6 = (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v4 + 20))(v4) == 1;
    result = 5;
    if ( v6 )
      return v4[353];
  }
  return result;
}
