

#pragma once


#include <cstdint>


namespace peripherals
{

	namespace rcc
	{
		enum class RccBus
		{
			APB1,
			APB2,
			AHB
		};


		enum class PreDiv1Src
		{
			HSE,
			PLL2
		};


		enum class PllSrc
		{
			HSE,
			PreDiv1
		};


		enum class McoSrc
		{
			HSE,
			HSI,
			SYSCLK,
			PLLCLK_DIV2,
			PLL2CLK,
			PLL3CLK_DIV2,
			PLL3CLK,
			XT1
		};


		enum class PllMul
		{
			Mul_4 = 2,
			Mul_5,
			Mul_6,
			Mul_7,
			Mul_8,
			Mul_9,
			Mul_6_5 = 11
		};


		enum class Pll2Mul
		{
			Mul_8,
			Mul_9,
			Mul_10,
			Mul_11,
			Mul_12,
			Mul_13,
			Mul_14,
			Mul_16 = 14,
			Mul_20,
		};


		enum class Pll3Mul
		{
			Mul_8,
			Mul_9,
			Mul_10,
			Mul_11,
			Mul_12,
			Mul_13,
			Mul_14,
			Mul_16 = 14,
			Mul_20,
		};


		enum class ADCPre
		{
			Div_2,
			Div_4,
			Div_6,
			Div_8
		};


		enum class APB2Pre
		{
			Div_1 = 0,
			Div_2 = 4,
			Div_4,
			Div_8,
			Div_16
		};


		enum class APB1Pre
		{
			Div_1 = 0,
			Div_2 = 4,
			Div_4,
			Div_8,
			Div_16
		};


		enum class I2S3Src
		{
			SYSCLK,
			PLL3
		};


		enum class I2S2Src
		{
			SYSCLK,
			PLL3
		};


		enum class PreDiv1Src
		{
			HSE,
			PLL2
		};


		class RccSetup
		{
			public:
				RccSetup(uint32_t crystalFreq);
				~RccSetup();

				void set_PreDiv1Src(PreDiv1Src value);
				PreDiv1Src get_PreDiv1Src(void) const;

				void set_PllScr(PllSrc value);
				PllSrc get_PllScr(void) const;

				void set_McoSrc(McoSrc value);
				McoSrc get_McoSrc(void) const;

				void set_PllMul(PllMul value);
				PllMul get_PllMul(void) const;

				void set_Pll2Mul(Pll2Mul value);
				Pll2Mul get_Pll2Mul(void) const;

				void set_Pll3Mul(Pll3Mul value);
				Pll3Mul get_Pll3Mul(void) const;

				void set_ADCPre(ADCPre value);
				ADCPre get_ADCPre(void) const;

				void set_APB2Pre(APB2Pre value);
				APB2Pre get_APB2Pre(void) const;

				void set_APB1Pre(APB1Pre value);
				APB1Pre get_APB1Pre(void) const;

				void set_I2S3Src(I2S3Src value);
				I2S3Src get_I2S3Src(void) const;

				void set_I2S2Src(I2S2Src value);
				I2S2Src get_I2S2Src(void) const;

				void set_PreDiv1Src(PreDiv1Src value);
				PreDiv1Src get_PreDiv1Src(void) const;

				void default_clock(void);
				void max_core_clock(void);

				bool parse(void) const;

			protected:
				uint32_t	_crystalFreq = 0;

				PreDiv1Src 	_preDiv1Src = PreDiv1Scr::HSE;
				PllSrc		_pllSrc = PllScr::HSE;
				McoSrc		_mcoSrc = McoSrc::HSE;
				PllMul 		_pllMul = PllMul::Mul_4;
				Pll2Mul 	_pll2Mul = Pll2Mul::Mul_8;
				Pll3Mul 	_pll3Mul = Pll3Mul::Mul_8;
				ADCPre 		_adcPre = ADCPre::Div_2;
				APB2Pre 	_apb2Pre = APB2Pre::Div_1;
				APB1Pre 	_apb1Pre = APB1Pre::Div_1;
				I2S3Src 	_i2s3Src = I2S3Src::SYSCLK;
				I2S2Src 	_i2s2Src = I2S2Src::SYSCLK;
				PreDiv1Src 	_preDiv1Src = PreDiv1Src::HSE;
		};


	} // namespace rcc

} // namespace peripherals
