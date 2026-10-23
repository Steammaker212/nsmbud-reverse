/* sub_6099EE5C
 * address: 0x6099EE5C   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6099EE5C(int a1)
{
  int TlsValue; // r0
  char v3; // r12
  unsigned int CurrentCoreNumber; // r0
  unsigned int v5; // r1
  unsigned int *v6; // r4
  unsigned int result; // r0

  if ( !nn__os__GetTlsValue(dword_60CCFC58) )
    nn__os__GetCurrentCoreNumber(0);
  TlsValue = nn__os__GetTlsValue(dword_60CCFC58);
  if ( TlsValue )
    CurrentCoreNumber = TlsValue - 1;
  else
    CurrentCoreNumber = nn__os__GetCurrentCoreNumber(0);
  v5 = FIELD_U32(a1, 8);
  v6 = *(unsigned int **)(a1 + 12);
  if ( v5 > CurrentCoreNumber )
    v6 += CurrentCoreNumber;
  if ( ((unsigned int)&dword_60CD0E0C & ~(1620700896 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0E0C) )
  {
    dword_60CD0D7C = 1045746901;
    dword_60CD0D80 = 1062524117;
    dword_60CD0D84 = 1059102881;
    dword_60CD0D88 = 1065353216;
    dword_60CD0D8C = 0;
    dword_60CD0D90 = 1059760811;
    dword_60CD0D94 = 1055188197;
    dword_60CD0D98 = 1065353216;
    dword_60CD0D9C = 1040220289;
    dword_60CD0DA0 = 1056898815;
    dword_60CD0DA4 = 1052819649;
    dword_60CD0DA8 = 1065353216;
    dword_60CD0DAC = 1061142464;
    dword_60CD0DB0 = 1057392263;
    dword_60CD0DB4 = 1044431041;
    dword_60CD0DB8 = 1065353216;
    dword_60CD0DBC = 1065353216;
    dword_60CD0DC0 = 1058642330;
    dword_60CD0DC4 = 0;
    dword_60CD0DC8 = 1065353216;
    dword_60CD0DCC = 1065353216;
    dword_60CD0DD0 = 1060287155;
    dword_60CD0DD4 = 1048608897;
    dword_60CD0DD8 = 1065353216;
    dword_60CD0DDC = 1060155569;
    dword_60CD0DE0 = 1043378353;
    dword_60CD0DE4 = 1050056343;
    dword_60CD0DE8 = 1065353216;
    dword_60CD0DEC = 1063971563;
    dword_60CD0DF0 = 0;
    dword_60CD0DF4 = 1046273245;
    dword_60CD0DF8 = 1065353216;
    unk_60CD0DFC = 1064695286;
    unk_60CD0E00 = 1047852277;
    unk_60CD0E04 = 1053872337;
    dword_60CD0E08 = 1065353216;
    _cxa_guard_release(&dword_60CD0E0C);
  }
  result = (*v6 + 1) % 9;
  *v6 = result;
  return result;
}
