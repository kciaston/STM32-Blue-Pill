

#include "rcc_setup.hpp"


peripherals::rcc::RccSetup::RccSetup(uint32_t crystalFreq)
{
	_crystalFreq = crystalFreq;
}


peripherals::rcc::RccSetup::~RccSetup()
{
	;
}


void peripherals::rcc::RccSetup::set_PreDiv1Src(PreDiv1Scr value)
{
	_preDiv1Src = value;
}


PreDiv1Scr peripherals::rcc::RccSetup::get_PreDiv1Src(void) const
{
	return _preDiv1Scr;
}


void peripherals::rcc::RccSetup::set_PllSrc(PllScr value)
{
	_pllSrc = value;
}


PllScr peripherals::rcc::RccSetup::get_PllScr(void) const
{
	return _pllSrc;
}


void peripherals::rcc::RccSetup::set_McoSrc(McoSrc value)
{
	_mcoSrc = value;
}


McoSrc peripherals::rcc::RccSetup::get_McoSrc(void) const
{
	return _mcoSrc;
}


void peripherals::rcc::RccSetup::set_PllMul(PllMul value)
{
	_pllMul = value;
}


PllMul peripherals::rcc::RccSetup::get_PllMul(void) const
{
	return _pllMul;
}


void peripherals::rcc::RccSetup::set_Pll2Mul(Pll2Mul value)
{
	_pll2Mul = value;
}


Pll2Mul peripherals::rcc::RccSetup::get_Pll2Mul(void) const
{
	return _pll2Mul;
}


void peripherals::rcc::RccSetup::set_Pll3Mul(Pll3Mul value)
{
	_pll3Mul = value;
}


Pll3Mul peripherals::rcc::RccSetup::get_Pll3Mul(void) const
{
	return _pll3Mul;
}


void peripherals::rcc::RccSetup::set_ADCPre(ADCPre value)
{
	_adcPre = value;
}


ADCPre peripherals::rcc::RccSetup::get_ADCPre(void) const
{
	return _adcPre;
}


void peripherals::rcc::RccSetup::set_APB2Pre(APB2Pre value)
{
	_apb2Pre = value;
}


APB2Pre peripherals::rcc::RccSetup::get_APB2Pre(void) const
{
	return _apb2Pre;
}


void peripherals::rcc::RccSetup::set_APB1Pre(APB1Pre value)
{
	_apb1Pre = value;
}


APB1Pre peripherals::rcc::RccSetup::get_APB1Pre(void) const
{
	return _apb1Pre;
}


void peripherals::rcc::RccSetup::set_I2S3Src(I2S3Src value)
{
	_i2s3Src = value;
}


I2S3Src peripherals::rcc::RccSetup::get_I2S3Src(void) const
{
	return _i2s3Src;
}


void peripherals::rcc::RccSetup::set_I2S2Src(I2S2Src value)
{
	_i2s2Src = value;
}


I2S2Src peripherals::rcc::RccSetup::get_I2S2Src(void) const
{
	return _i2s2Src;
}


void peripherals::rcc::RccSetup::set_PreDiv1Src(PreDiv1Src value)
{
	_preDiv1Src = value;
}


PreDiv1Src peripherals::rcc::RccSetup::get_PreDiv1Src(void) const
{
	return _preDiv1Src;
}


void peripherals::rcc::RccSetup::default_clock(void)
{
	#warning "to implement !!"
}


void peripherals::rcc::RccSetup::max_core_clock(void)
{
	#warning "to implement !!"
}


bool peripherals::rcc::RccSetup::parse(void) const
{
	#warning "to implement !!"
}

