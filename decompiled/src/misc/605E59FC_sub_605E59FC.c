/* sub_605E59FC
 * address: 0x605E59FC   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605E59FC(
        StateMethodExecuter *result,
        float a2,
        float a3,
        float32x2_t a4,
        float32x2_t a5)
{
  char *vtable; // r2
  int currentState; // r2
  void *v7; // r1
  float v8; // s1
  float v9; // s0
  unsigned int owner; // r1

  vtable = (char *)result[577].vtable;
  if ( vtable )
    result[577].vtable = vtable - 1;
  currentState = result[576].currentState;
  if ( currentState )
    result[576].currentState = currentState - 1;
  v7 = result[567].vtable;
  if ( ((unsigned __int16)v7 & 0x801) == 1 )
    return sub_605D79D0((int)result, (StateBase *)&dword_60CB1690, 0);
  if ( ((unsigned __int16)v7 & 0x800) != 0 )
  {
    owner = (unsigned int)result[667].owner;
    if ( owner <= 3 )
      __asm { ADD             PC, R1, R2 }
  }
  else
  {
    if ( (BYTE1(result[567].owner) & 0x10) != 0 && LOBYTE(result[574].owner) && (int)result[575].owner < -1073741824 )
    {
      v8 = 0.0;
      v9 = *(float *)&result[10].vtable;
    }
    else
    {
      a4.n64_u32[0] = (unsigned __int32)result[10].owner;
      a5.n64_u32[0] = 3.0;
      v9 = *(float *)&result[10].vtable;
      LODWORD(v8) = vmax_f32(a4, a5).n64_u32[0];
    }
    return (StateMethodExecuter *)sub_605D9504((int)result, 0, v9, v8);
  }
  return result;
}
